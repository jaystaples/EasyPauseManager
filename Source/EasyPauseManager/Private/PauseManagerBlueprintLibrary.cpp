#include "PauseManagerBlueprintLibrary.h"
#include "PauseManagerSubsystem.h"
#include "PauseReason.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

UPauseManagerSubsystem* UPauseManagerBlueprintLibrary::GetPauseManager(const UObject* WorldContextObject)
{
	if (!GEngine || !WorldContextObject)
	{
		return nullptr;
	}
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
	return GI ? GI->GetSubsystem<UPauseManagerSubsystem>() : nullptr;
}

UPauseReason* UPauseManagerBlueprintLibrary::RequestPause(const UObject* WorldContextObject, FGameplayTag PauseTag, UObject* Requester)
{
	UPauseManagerSubsystem* PM = GetPauseManager(WorldContextObject);
	return PM ? PM->CreatePauseReason(PauseTag, Requester) : nullptr;
}

void UPauseManagerBlueprintLibrary::ReleasePause(const UObject* WorldContextObject, UPauseReason* PauseReason)
{
	if (UPauseManagerSubsystem* PM = GetPauseManager(WorldContextObject))
	{
		PM->DeactivatePauseReason(PauseReason);
	}
}

int32 UPauseManagerBlueprintLibrary::ReleasePausesWithTag(const UObject* WorldContextObject, FGameplayTag PauseTag, bool bIncludeChildTags)
{
	UPauseManagerSubsystem* PM = GetPauseManager(WorldContextObject);
	return PM ? PM->ReleasePausesWithTag(PauseTag, bIncludeChildTags) : 0;
}

TSet<UPauseReason*> UPauseManagerBlueprintLibrary::GetPauseReasons(const UObject* WorldContextObject)
{
	const UPauseManagerSubsystem* PM = GetPauseManager(WorldContextObject);
	return PM ? PM->GetPauseReasons() : TSet<UPauseReason*>();
}

bool UPauseManagerBlueprintLibrary::HasPauseReasonWithTag(const UObject* WorldContextObject, FGameplayTag PauseTag, bool bIncludeChildTags)
{
	const UPauseManagerSubsystem* PM = GetPauseManager(WorldContextObject);
	return PM && PM->HasPauseReasonWithTag(PauseTag, bIncludeChildTags);
}
