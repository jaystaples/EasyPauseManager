#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "PauseReason.generated.h"

/**
 * A single pause request. Whoever creates one holds onto it and hands it back
 * to Release Pause / Deactivate Pause Reason when they no longer need the game paused.
 */
UCLASS(BlueprintType)
class EASYPAUSEMANAGER_API UPauseReason : public UObject
{
	GENERATED_BODY()

public:
	/** Why the game is paused, e.g. Pause.Menu, Pause.Cutscene, Pause.Inventory. */
	UPROPERTY(BlueprintReadOnly, Category = "Pause", meta = (Categories = "EasyPauseManagerRoot"))
	FGameplayTag PauseTag;

	/** The object that requested the pause. Weak, so it never keeps the requester alive. */
	UPROPERTY(BlueprintReadOnly, Category = "Pause")
	TWeakObjectPtr<UObject> Requester;

	/** Requester's name captured at creation, so it can still be reported after the requester is destroyed. */
	UPROPERTY(BlueprintReadOnly, Category = "Pause")
	FString RequesterName;

	/** Real time (seconds since app start) the reason was created. */
	UPROPERTY(BlueprintReadOnly, Category = "Pause")
	double CreatedAtRealTime = 0.0;

	/** True if a requester was given and has since been destroyed. */
	UFUNCTION(BlueprintPure, Category = "Pause")
	bool IsRequesterDead() const { return Requester.IsStale(true); }

	UFUNCTION(BlueprintPure, Category = "Pause")
	FString ToDebugString() const;
};
