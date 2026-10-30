#pragma once

#include "NativeGameplayTags.h"

/** Default tags shipped with the plugin. Change the root in Project Settings > Plugins > Easy Pause if you prefer your own hierarchy. */
namespace EasyPauseTags
{
	EASYPAUSEMANAGER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Root);
	EASYPAUSEMANAGER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Platform_FocusLost);
	EASYPAUSEMANAGER_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Platform_ControllerDisconnected);
}
