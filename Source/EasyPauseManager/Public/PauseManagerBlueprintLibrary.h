#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "PauseManagerBlueprintLibrary.generated.h"

class UPauseReason;
class UPauseManagerSubsystem;

/** Static helpers so any Blueprint can request/release pauses without fetching the subsystem first. */
UCLASS()
class EASYPAUSEMANAGER_API UPauseManagerBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Pause", meta = (WorldContext = "WorldContextObject"))
	static UPauseManagerSubsystem* GetPauseManager(const UObject* WorldContextObject);

	/** Requests a pause. Hold onto the returned Pause Reason and pass it to Release Pause when done. */
	UFUNCTION(BlueprintCallable, Category = "Pause", meta = (WorldContext = "WorldContextObject", DefaultToSelf = "Requester", AdvancedDisplay = "Requester"))
	static UPauseReason* RequestPause(const UObject* WorldContextObject, UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, UObject* Requester);

	/** Releases a pause previously returned by Request Pause. */
	UFUNCTION(BlueprintCallable, Category = "Pause", meta = (WorldContext = "WorldContextObject"))
	static void ReleasePause(const UObject* WorldContextObject, UPauseReason* PauseReason);

	/** Releases every active pause matching the tag, without needing the Pause Reason object. Returns how many were released. */
	UFUNCTION(BlueprintCallable, Category = "Pause", meta = (WorldContext = "WorldContextObject"))
	static int32 ReleasePausesWithTag(const UObject* WorldContextObject, UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, bool bIncludeChildTags = true);

	UFUNCTION(BlueprintPure, Category = "Pause", meta = (WorldContext = "WorldContextObject"))
	static TSet<UPauseReason*> GetPauseReasons(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "Pause", meta = (WorldContext = "WorldContextObject"))
	static bool HasPauseReasonWithTag(const UObject* WorldContextObject, UPARAM(meta = (Categories = "EasyPauseManagerRoot")) FGameplayTag PauseTag, bool bIncludeChildTags = true);
};
