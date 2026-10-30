#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "EasyPauseSettings.generated.h"

/**
 * Tag pickers marked with Categories = EASYPAUSE_TAG_CATEGORY are filtered to the Root Pause Tag.
 * This works through Gameplay Tags "Category Remapping": the plugin maps this category name
 * to whatever root is set below, so the filter follows the project setting.
 */
#define EASYPAUSE_TAG_CATEGORY "EasyPauseManagerRoot"

/** Project Settings > Plugins > Easy Pause Manager */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Easy Pause Manager"))
class EASYPAUSEMANAGER_API UEasyPauseSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UEasyPauseSettings();

	virtual FName GetCategoryName() const override { return FName(TEXT("Plugins")); }
	virtual FName GetSectionName() const override { return FName(TEXT("EasyPauseManager")); }
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	/** Points the EASYPAUSE_TAG_CATEGORY filter at the current Root Pause Tag. Editor only. */
	static void ApplyTagCategoryRemap();
#endif

	/** Fills any tag settings that failed to resolve (e.g. loaded before the plugin's tag source was registered). */
	static void ResolveDefaultTags();

	/** Every pause tag should sit under this root. Request Pause and other pause tag pickers only show tags under it. */
	UPROPERTY(Config, EditAnywhere, Category = "Tags")
	FGameplayTag RootPauseTag;

	/** Log (and show in the PIE message log) any pause reasons still active when a Play-In-Editor session ends. */
	UPROPERTY(Config, EditAnywhere, Category = "Debugging")
	bool bWarnOnPIEEndWithActivePauses = true;

	/** Automatically release pause reasons whose Requester has been destroyed without releasing them. */
	UPROPERTY(Config, EditAnywhere, Category = "Safety")
	bool bAutoReleaseDeadRequesters = true;

	/** How often (real seconds) to check for dead requesters. Runs while paused. */
	UPROPERTY(Config, EditAnywhere, Category = "Safety", meta = (ClampMin = "0.05", EditCondition = "bAutoReleaseDeadRequesters"))
	float DeadRequesterCheckInterval = 0.25f;

	/** Pause while the game window/app is not focused. */
	UPROPERTY(Config, EditAnywhere, Category = "Platform")
	bool bPauseOnFocusLost = true;

	UPROPERTY(Config, EditAnywhere, Category = "Platform", meta = (EditCondition = "bPauseOnFocusLost", Categories = "EasyPauseManagerRoot"))
	FGameplayTag FocusLostTag;

	/** Pause while any input device is disconnected. */
	UPROPERTY(Config, EditAnywhere, Category = "Platform")
	bool bPauseOnControllerDisconnect = true;

	UPROPERTY(Config, EditAnywhere, Category = "Platform", meta = (EditCondition = "bPauseOnControllerDisconnect", Categories = "EasyPauseManagerRoot"))
	FGameplayTag ControllerDisconnectedTag;

	/** Platform hooks are off in PIE by default, so clicking out of the editor viewport doesn't pause your session. */
	UPROPERTY(Config, EditAnywhere, Category = "Platform")
	bool bEnablePlatformHooksInPIE = false;
};
