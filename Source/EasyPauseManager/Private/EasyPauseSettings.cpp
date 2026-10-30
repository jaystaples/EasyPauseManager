#include "EasyPauseSettings.h"
#include "GameplayTagsSettings.h"

#define LOCTEXT_NAMESPACE "EasyPauseManager"

namespace EasyPauseDefaults
{
	static const FName Root(TEXT("Pause"));
	static const FName FocusLost(TEXT("Pause.Platform.FocusLost"));
	static const FName ControllerDisconnected(TEXT("Pause.Platform.ControllerDisconnected"));
}

UEasyPauseSettings::UEasyPauseSettings()
{
	// Tags come from Config/Tags/EasyPauseManagerTags.ini. ErrorIfNotFound = false: if the CDO is
	// built before that source is registered, these stay empty and ResolveDefaultTags fills them.
	RootPauseTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::Root, false);
	FocusLostTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::FocusLost, false);
	ControllerDisconnectedTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::ControllerDisconnected, false);
}

void UEasyPauseSettings::ResolveDefaultTags()
{
	UEasyPauseSettings* Settings = GetMutableDefault<UEasyPauseSettings>();

	// Re-read config now that the plugin's tags exist, so saved project values win over defaults.
	Settings->ReloadConfig();

	if (!Settings->RootPauseTag.IsValid())
	{
		Settings->RootPauseTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::Root, false);
	}
	if (!Settings->FocusLostTag.IsValid())
	{
		Settings->FocusLostTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::FocusLost, false);
	}
	if (!Settings->ControllerDisconnectedTag.IsValid())
	{
		Settings->ControllerDisconnectedTag = FGameplayTag::RequestGameplayTag(EasyPauseDefaults::ControllerDisconnected, false);
	}
}

#if WITH_EDITOR
FText UEasyPauseSettings::GetSectionText() const
{
	return LOCTEXT("SettingsSectionText", "Easy Pause Manager");
}

void UEasyPauseSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetMemberPropertyName() == GET_MEMBER_NAME_CHECKED(UEasyPauseSettings, RootPauseTag))
	{
		ApplyTagCategoryRemap();
	}
}

void UEasyPauseSettings::ApplyTagCategoryRemap()
{
	UGameplayTagsSettings* TagSettings = GetMutableDefault<UGameplayTagsSettings>();
	const FGameplayTag& Root = GetDefault<UEasyPauseSettings>()->RootPauseTag;

	// No root set: fall back to the plugin default so the picker isn't empty.
	const FString RootString = Root.IsValid() ? Root.ToString() : EasyPauseDefaults::Root.ToString();
	const FString BaseCategory(TEXT(EASYPAUSE_TAG_CATEGORY));

	FGameplayTagCategoryRemap* Existing = TagSettings->CategoryRemapping.FindByPredicate(
		[&BaseCategory](const FGameplayTagCategoryRemap& Remap) { return Remap.BaseCategory == BaseCategory; });

	if (!Existing)
	{
		Existing = &TagSettings->CategoryRemapping.AddDefaulted_GetRef();
		Existing->BaseCategory = BaseCategory;
	}

	Existing->RemapCategories.Reset();
	Existing->RemapCategories.Add(RootString);
}
#endif

#undef LOCTEXT_NAMESPACE
