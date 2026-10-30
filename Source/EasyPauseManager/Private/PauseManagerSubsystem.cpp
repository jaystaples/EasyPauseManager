#include "PauseManagerSubsystem.h"
#include "PauseReason.h"
#include "EasyPauseManager.h"
#include "EasyPauseSettings.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/Canvas.h"
#include "GameFramework/PlayerController.h"
#include "Debug/DebugDrawService.h"
#include "HAL/IConsoleManager.h"
#include "HAL/PlatformTime.h"
#include "Logging/MessageLog.h"
#include "UObject/UObjectGlobals.h"
#include "Framework/Application/SlateApplication.h"
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"

static TAutoConsoleVariable<bool> CVarEasyPauseShowDebug(
	TEXT("EasyPause.ShowDebug"),
	false,
	TEXT("Draw active Easy Pause Manager reasons on screen. 0 = off, 1 = on."),
	ECVF_Cheat);

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

void UPauseManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	PostLoadMapHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UPauseManagerSubsystem::HandlePostLoadMap);

	DebugDrawHandle = UDebugDrawService::Register(TEXT("Game"),
		FDebugDrawDelegate::CreateUObject(this, &UPauseManagerSubsystem::DrawDebugOverlay));

	const UEasyPauseSettings* Settings = GetDefault<UEasyPauseSettings>();
	if (Settings->bAutoReleaseDeadRequesters)
	{
		// Core ticker runs on real time and keeps ticking while the game is paused.
		DeadRequesterTickerHandle = FTSTicker::GetCoreTicker().AddTicker(
			FTickerDelegate::CreateUObject(this, &UPauseManagerSubsystem::TickDeadRequesterCheck),
			FMath::Max(0.05f, Settings->DeadRequesterCheckInterval));
	}

	BindPlatformHooks();
}

void UPauseManagerSubsystem::Deinitialize()
{
	WarnIfPIEEndedWithActivePauses();

	UnbindPlatformHooks();

	if (DeadRequesterTickerHandle.IsValid())
	{
		FTSTicker::GetCoreTicker().RemoveTicker(DeadRequesterTickerHandle);
		DeadRequesterTickerHandle.Reset();
	}

	UDebugDrawService::Unregister(DebugDrawHandle);
	FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(PostLoadMapHandle);

	PauseReasons.Empty();
	FocusLostReason = nullptr;
	ControllerDisconnectedReason = nullptr;

	Super::Deinitialize();
}

// ---------------------------------------------------------------------------
// Core API
// ---------------------------------------------------------------------------

UPauseReason* UPauseManagerSubsystem::CreatePauseReason(FGameplayTag PauseTag, UObject* Requester)
{
	ValidatePauseTag(PauseTag);

	UPauseReason* NewReason = NewObject<UPauseReason>(this);
	NewReason->PauseTag = PauseTag;
	NewReason->Requester = Requester;
	NewReason->RequesterName = Requester ? GetNameSafe(Requester) : FString();
	NewReason->CreatedAtRealTime = FPlatformTime::Seconds();

	PauseReasons.Add(NewReason);
	UE_LOG(LogEasyPause, Verbose, TEXT("Pause added: %s (%d active)"), *NewReason->ToDebugString(), PauseReasons.Num());

	UpdatePauseState();
	return NewReason;
}

void UPauseManagerSubsystem::DeactivatePauseReason(UPauseReason* PauseReason)
{
	if (!PauseReason)
	{
		return;
	}

	if (PauseReasons.Remove(PauseReason) > 0)
	{
		UE_LOG(LogEasyPause, Verbose, TEXT("Pause released: %s (%d active)"), *PauseReason->ToDebugString(), PauseReasons.Num());
	}

	UpdatePauseState();
}

int32 UPauseManagerSubsystem::ReleasePausesWithTag(FGameplayTag PauseTag, bool bIncludeChildTags)
{
	if (!PauseTag.IsValid())
	{
		return 0;
	}

	const int32 Before = PauseReasons.Num();
	RemoveReasonsWhere([&](const UPauseReason& R)
	{
		return bIncludeChildTags ? R.PauseTag.MatchesTag(PauseTag) : R.PauseTag.MatchesTagExact(PauseTag);
	}, TEXT("Released by tag"));

	const int32 Removed = Before - PauseReasons.Num();
	if (Removed > 0)
	{
		UpdatePauseState();
	}
	return Removed;
}

void UPauseManagerSubsystem::UpdatePauseState()
{
	const bool bShouldPause = ShouldBePaused();

	UGameInstance* GI = GetGameInstance();
	if (!GI || !GI->GetWorld())
	{
		return;
	}

	if (!UGameplayStatics::SetGamePaused(GI, bShouldPause))
	{
		UE_LOG(LogEasyPause, Warning, TEXT("SetGamePaused(%s) was rejected (no local player controller yet, or the game mode disallows pausing)."),
			bShouldPause ? TEXT("true") : TEXT("false"));
		return;
	}

	if (bShouldPause != bLastAppliedPause)
	{
		bLastAppliedPause = bShouldPause;
		OnPauseStateChanged.Broadcast(bShouldPause);
	}
}

TSet<UPauseReason*> UPauseManagerSubsystem::GetPauseReasons() const
{
	TSet<UPauseReason*> Out;
	Out.Reserve(PauseReasons.Num());
	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		Out.Add(R.Get());
	}
	return Out;
}

bool UPauseManagerSubsystem::HasPauseReasonWithTag(FGameplayTag PauseTag, bool bIncludeChildTags) const
{
	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		if (R && (bIncludeChildTags ? R->PauseTag.MatchesTag(PauseTag) : R->PauseTag.MatchesTagExact(PauseTag)))
		{
			return true;
		}
	}
	return false;
}

void UPauseManagerSubsystem::ForceUnpause()
{
	UE_LOG(LogEasyPause, Log, TEXT("ForceUnpause: clearing %d pause reason(s)."), PauseReasons.Num());
	PauseReasons.Empty();
	UpdatePauseState();
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

bool UPauseManagerSubsystem::IsPIE() const
{
	const UGameInstance* GI = GetGameInstance();
	const FWorldContext* Ctx = GI ? GI->GetWorldContext() : nullptr;
	return Ctx && Ctx->WorldType == EWorldType::PIE;
}

void UPauseManagerSubsystem::ValidatePauseTag(const FGameplayTag& PauseTag) const
{
	if (!PauseTag.IsValid())
	{
		UE_LOG(LogEasyPause, Warning, TEXT("Pause requested with no tag. Give every pause a tag so it can be identified and released."));
		return;
	}

	const FGameplayTag& Root = GetDefault<UEasyPauseSettings>()->RootPauseTag;
	if (Root.IsValid() && !PauseTag.MatchesTag(Root))
	{
		UE_LOG(LogEasyPause, Warning, TEXT("Pause tag '%s' is not under the root '%s' (Project Settings > Plugins > Easy Pause Manager). It will still pause."),
			*PauseTag.ToString(), *Root.ToString());
	}
}

bool UPauseManagerSubsystem::IsReasonActive(const UPauseReason* Reason) const
{
	return Reason && PauseReasons.Contains(Reason);
}

bool UPauseManagerSubsystem::RemoveReasonsWhere(TFunctionRef<bool(const UPauseReason&)> Predicate, const TCHAR* LogContext)
{
	TArray<UPauseReason*> ToRemove;
	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		if (!R || Predicate(*R))
		{
			ToRemove.Add(R.Get());
		}
	}

	for (UPauseReason* R : ToRemove)
	{
		PauseReasons.Remove(R);
		if (R)
		{
			UE_LOG(LogEasyPause, Log, TEXT("%s: %s"), LogContext, *R->ToDebugString());
		}
	}
	return ToRemove.Num() > 0;
}

void UPauseManagerSubsystem::HandlePostLoadMap(UWorld* LoadedWorld)
{
	if (!LoadedWorld || LoadedWorld->GetGameInstance() != GetGameInstance())
	{
		return;
	}

	// A freshly loaded world starts unpaused, so reset the cached state and re-apply.
	bLastAppliedPause = false;
	if (ShouldBePaused())
	{
		UpdatePauseState();
	}
}

// ---------------------------------------------------------------------------
// Dead requester cleanup
// ---------------------------------------------------------------------------

bool UPauseManagerSubsystem::TickDeadRequesterCheck(float DeltaTime)
{
	if (PauseReasons.Num() == 0)
	{
		return true;
	}

	TArray<UPauseReason*> Dead;
	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		if (R && R->IsRequesterDead())
		{
			Dead.Add(R.Get());
		}
	}

	if (Dead.Num() > 0)
	{
		for (UPauseReason* R : Dead)
		{
			PauseReasons.Remove(R);
			UE_LOG(LogEasyPause, Warning, TEXT("Auto-released pause '%s': requester '%s' was destroyed without releasing it."),
				*R->PauseTag.ToString(), *R->RequesterName);
		}
		UpdatePauseState();
	}

	return true; // keep ticking
}

// ---------------------------------------------------------------------------
// Debug
// ---------------------------------------------------------------------------

void UPauseManagerSubsystem::DrawDebugOverlay(UCanvas* Canvas, APlayerController* PC)
{
	if (!Canvas || !CVarEasyPauseShowDebug.GetValueOnGameThread())
	{
		return;
	}
	if (PC && PC->GetGameInstance() != GetGameInstance())
	{
		return; // another PIE instance's viewport
	}

	const UFont* Font = GEngine ? GEngine->GetSmallFont() : nullptr;
	if (!Font)
	{
		return;
	}

	float X = 50.f;
	float Y = 120.f;
	const float LineHeight = 14.f;

	Canvas->SetDrawColor(ShouldBePaused() ? FColor::Orange : FColor::Green);
	Canvas->DrawText(Font, FString::Printf(TEXT("EasyPause: %s  (%d reason%s)"),
		ShouldBePaused() ? TEXT("PAUSED") : TEXT("running"),
		PauseReasons.Num(), PauseReasons.Num() == 1 ? TEXT("") : TEXT("s")), X, Y);
	Y += LineHeight;

	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		if (!R)
		{
			continue;
		}
		Canvas->SetDrawColor(R->IsRequesterDead() ? FColor::Red : FColor::White);
		Canvas->DrawText(Font, FString::Printf(TEXT("  - %s"), *R->ToDebugString()), X, Y);
		Y += LineHeight;
	}
}

void UPauseManagerSubsystem::WarnIfPIEEndedWithActivePauses() const
{
#if WITH_EDITOR
	if (!GIsEditor || !IsPIE() || !GetDefault<UEasyPauseSettings>()->bWarnOnPIEEndWithActivePauses)
	{
		return;
	}

	TArray<const UPauseReason*> Leaked;
	for (const TObjectPtr<UPauseReason>& R : PauseReasons)
	{
		// Platform-owned reasons (focus lost etc.) are expected and not leaks.
		if (R && R != FocusLostReason && R != ControllerDisconnectedReason)
		{
			Leaked.Add(R.Get());
		}
	}

	if (Leaked.Num() == 0)
	{
		return;
	}

	FMessageLog PIELog(TEXT("PIE"));
	PIELog.Warning(FText::FromString(FString::Printf(
		TEXT("EasyPause: PIE ended with %d unreleased pause reason(s). These would leave the game paused:"), Leaked.Num())));

	for (const UPauseReason* R : Leaked)
	{
		const FString Line = FString::Printf(TEXT("    %s"), *R->ToDebugString());
		PIELog.Warning(FText::FromString(Line));
		UE_LOG(LogEasyPause, Warning, TEXT("Unreleased at PIE end: %s"), *R->ToDebugString());
	}
#endif
}

// ---------------------------------------------------------------------------
// Platform hooks
// ---------------------------------------------------------------------------

void UPauseManagerSubsystem::BindPlatformHooks()
{
	const UEasyPauseSettings* Settings = GetDefault<UEasyPauseSettings>();

	if (IsPIE() && !Settings->bEnablePlatformHooksInPIE)
	{
		return;
	}
	if (IsRunningDedicatedServer())
	{
		return;
	}

	if (Settings->bPauseOnFocusLost && FSlateApplication::IsInitialized())
	{
		AppActivationHandle = FSlateApplication::Get().OnApplicationActivationStateChanged()
			.AddUObject(this, &UPauseManagerSubsystem::HandleAppActivationChanged);
	}

	if (Settings->bPauseOnControllerDisconnect)
	{
		DeviceConnectionHandle = IPlatformInputDeviceMapper::Get().GetOnInputDeviceConnectionChange().AddWeakLambda(this,
			[this](EInputDeviceConnectionState NewState, FPlatformUserId UserId, FInputDeviceId /*DeviceId*/)
			{
				if (NewState == EInputDeviceConnectionState::Connected || NewState == EInputDeviceConnectionState::Disconnected)
				{
					HandleInputDeviceConnectionChange(NewState == EInputDeviceConnectionState::Connected, UserId.GetInternalId());
				}
			});
	}
}

void UPauseManagerSubsystem::UnbindPlatformHooks()
{
	if (AppActivationHandle.IsValid() && FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().OnApplicationActivationStateChanged().Remove(AppActivationHandle);
	}
	AppActivationHandle.Reset();

	if (DeviceConnectionHandle.IsValid())
	{
		IPlatformInputDeviceMapper::Get().GetOnInputDeviceConnectionChange().Remove(DeviceConnectionHandle);
	}
	DeviceConnectionHandle.Reset();
}

void UPauseManagerSubsystem::HandleAppActivationChanged(const bool bIsActive)
{
	if (!bIsActive)
	{
		if (!IsReasonActive(FocusLostReason))
		{
			FocusLostReason = CreatePauseReason(GetDefault<UEasyPauseSettings>()->FocusLostTag, this);
		}
	}
	else if (FocusLostReason)
	{
		DeactivatePauseReason(FocusLostReason);
		FocusLostReason = nullptr;
	}
}

void UPauseManagerSubsystem::HandleInputDeviceConnectionChange(bool bConnected, int32 PlatformUserId)
{
	if (!bConnected)
	{
		UsersWithDisconnectedDevices.Add(PlatformUserId);
		if (!IsReasonActive(ControllerDisconnectedReason))
		{
			ControllerDisconnectedReason = CreatePauseReason(GetDefault<UEasyPauseSettings>()->ControllerDisconnectedTag, this);
		}
	}
	else
	{
		UsersWithDisconnectedDevices.Remove(PlatformUserId);
		if (UsersWithDisconnectedDevices.Num() == 0 && ControllerDisconnectedReason)
		{
			DeactivatePauseReason(ControllerDisconnectedReason);
			ControllerDisconnectedReason = nullptr;
		}
	}
}
