#include "EasyPauseManager.h"
#include "EasyPauseSettings.h"
#include "GameplayTagsManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"

DEFINE_LOG_CATEGORY(LogEasyPause);

void FEasyPauseManagerModule::StartupModule()
{
	// Register Config/Tags/EasyPauseManagerTags.ini as a gameplay tag source, so its tags load
	// and it appears as a source in "Add New Gameplay Tag".
	if (TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EasyPauseManager")))
	{
		const FString TagsDir = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Config"), TEXT("Tags"));
		UGameplayTagsManager::Get().AddTagIniSearchPath(TagsDir);
	}
	else
	{
		UE_LOG(LogEasyPause, Warning, TEXT("Could not find the EasyPauseManager plugin to register its gameplay tag source."));
	}

	UEasyPauseSettings::ResolveDefaultTags();

#if WITH_EDITOR
	UEasyPauseSettings::ApplyTagCategoryRemap();
#endif
}

IMPLEMENT_MODULE(FEasyPauseManagerModule, EasyPauseManager)
