#include "EasyPauseTags.h"

namespace EasyPauseTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Root, "Pause", "Root tag for all pause reasons.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Platform_FocusLost, "Pause.Platform.FocusLost", "Applied automatically when the game window loses focus.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Platform_ControllerDisconnected, "Pause.Platform.ControllerDisconnected", "Applied automatically when an input device disconnects.");
}
