#include "PauseManagerSubsystem.h"
#include "PauseReason.h"
#include "HAL/IConsoleManager.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Misc/OutputDevice.h"

namespace EasyPauseConsole
{
	static UPauseManagerSubsystem* GetManager(UWorld* World, FOutputDevice& Ar)
	{
		UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		UPauseManagerSubsystem* PM = GI ? GI->GetSubsystem<UPauseManagerSubsystem>() : nullptr;
		if (!PM)
		{
			Ar.Log(TEXT("EasyPause: no running game instance."));
		}
		return PM;
	}

	static void List(const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
	{
		UPauseManagerSubsystem* PM = GetManager(World, Ar);
		if (!PM)
		{
			return;
		}

		const TSet<UPauseReason*> Reasons = PM->GetPauseReasons();
		Ar.Logf(TEXT("EasyPause: %s, %d active reason(s)"), (World && World->IsPaused()) ? TEXT("PAUSED") : TEXT("running"), Reasons.Num());
		for (const UPauseReason* R : Reasons)
		{
			if (R)
			{
				Ar.Logf(TEXT("  - %s"), *R->ToDebugString());
			}
		}
	}

	static void ForceUnpause(const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
	{
		if (UPauseManagerSubsystem* PM = GetManager(World, Ar))
		{
			const int32 Count = PM->GetPauseReasons().Num();
			PM->ForceUnpause();
			Ar.Logf(TEXT("EasyPause: cleared %d reason(s) and unpaused."), Count);
		}
	}

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice ListCmd(
		TEXT("EasyPause.List"),
		TEXT("Lists every active pause reason, its requester and how long it has been held."),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(&List));

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice ForceUnpauseCmd(
		TEXT("EasyPause.ForceUnpause"),
		TEXT("Clears all pause reasons and unpauses the game."),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(&ForceUnpause),
		ECVF_Cheat);
}
