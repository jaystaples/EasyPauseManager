#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Containers/Ticker.h"
#include "PauseManagerSubsystem.generated.h"

class UPauseReason;
class UCanvas;
class APlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPauseStateChanged, bool, bIsPaused);

/**
 * Reference-counted pause manager.
 * Any object can create a Pause Reason. The game stays paused while at least one
 * reason is active, and unpauses only when all of them have been released.
 */
UCLASS()
class EASYPAUSEMANAGER_API UPauseManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/** Creates a pause reason, adds it to the set and updates the pause state. Keep the returned object to release it later. */
	UFUNCTION(BlueprintCallable, Category = "Pause", meta = (AdvancedDisplay = "Requester"))
	UPauseReason* CreatePauseReason(UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, UObject* Requester = nullptr);

	/** Removes the given pause reason and updates the pause state. Safe with null or already-removed reasons. */
	UFUNCTION(BlueprintCallable, Category = "Pause")
	void DeactivatePauseReason(UPauseReason* PauseReason);

	/** Removes every active reason matching the tag. Returns how many were removed. */
	UFUNCTION(BlueprintCallable, Category = "Pause")
	int32 ReleasePausesWithTag(UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, bool bIncludeChildTags = true);

	/** Returns all currently active pause reasons. */
	UFUNCTION(BlueprintPure, Category = "Pause")
	TSet<UPauseReason*> GetPauseReasons() const;

	/** True if any active reason matches the tag. */
	UFUNCTION(BlueprintPure, Category = "Pause")
	bool HasPauseReasonWithTag(UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, bool bIncludeChildTags = true) const;

	/** Fires only when the paused state actually flips. */
	UPROPERTY(BlueprintAssignable, Category = "Pause")
	FOnPauseStateChanged OnPauseStateChanged;

	/** Clears every pause reason and unpauses. C++/console only (EasyPause.ForceUnpause) — not exposed to Blueprint. */
	void ForceUnpause();

private:
	UPROPERTY()
	TSet<TObjectPtr<UPauseReason>> PauseReasons;

	/** Platform-owned reasons (requester = this subsystem). */
	UPROPERTY()
	TObjectPtr<UPauseReason> FocusLostReason;

	UPROPERTY()
	TObjectPtr<UPauseReason> ControllerDisconnectedReason;

	TSet<int32> UsersWithDisconnectedDevices;

	bool bLastAppliedPause = false;

	FDelegateHandle PostLoadMapHandle;
	FDelegateHandle DebugDrawHandle;
	FDelegateHandle AppActivationHandle;
	FDelegateHandle DeviceConnectionHandle;
	FTSTicker::FDelegateHandle DeadRequesterTickerHandle;

	/** Pauses if any reasons are active, unpauses otherwise. Called automatically whenever the set changes. */
	void UpdatePauseState();

	bool ShouldBePaused() const { return PauseReasons.Num() > 0; }

	bool IsPIE() const;
	void ValidatePauseTag(const FGameplayTag& PauseTag) const;
	bool IsReasonActive(const UPauseReason* Reason) const;
	bool RemoveReasonsWhere(TFunctionRef<bool(const UPauseReason&)> Predicate, const TCHAR* LogContext);

	void HandlePostLoadMap(UWorld* LoadedWorld);
	bool TickDeadRequesterCheck(float DeltaTime);
	void DrawDebugOverlay(UCanvas* Canvas, APlayerController* PC);
	void WarnIfPIEEndedWithActivePauses() const;

	void BindPlatformHooks();
	void UnbindPlatformHooks();
	void HandleAppActivationChanged(const bool bIsActive);
	void HandleInputDeviceConnectionChange(bool bConnected, int32 PlatformUserId);
};
