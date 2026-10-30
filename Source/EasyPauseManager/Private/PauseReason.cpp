#include "PauseReason.h"
#include "HAL/PlatformTime.h"

FString UPauseReason::ToDebugString() const
{
	const double Age = FPlatformTime::Seconds() - CreatedAtRealTime;
	const TCHAR* State = IsRequesterDead() ? TEXT(" [DESTROYED]") : TEXT("");
	return FString::Printf(TEXT("%s  |  requester: %s%s  |  %.1fs"),
		*PauseTag.ToString(),
		RequesterName.IsEmpty() ? TEXT("none") : *RequesterName,
		State,
		Age);
}
