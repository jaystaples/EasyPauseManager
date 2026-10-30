# Easy Pause Manager 1.1

Reference-counted pausing for Unreal (5.1+). Any object can hold its own pause request,
identified by a GameplayTag; the game only unpauses once every request has been released.

## Install
Copy the `EasyPauseManager` folder into your project's `Plugins/` folder, regenerate
project files, build, and enable the plugin.

## Blueprint usage
- **Request Pause** (Pause Tag) returns a `Pause Reason`. Store it in a variable.
  Requester defaults to Self.
- **Release Pause** (Pause Reason) removes it. The game unpauses when none remain.
- **Release Pauses With Tag** releases by tag, without needing the object.
- **Get Pause Reasons**, **Has Pause Reason With Tag**.
- To check whether the game is paused, use the engine's **Is Game Paused**.
- Bind to **On Pause State Changed** on the subsystem (via Get Pause Manager).
- The pause state updates automatically whenever a reason is added or released.

## C++ usage
```cpp
auto* PM = GetGameInstance()->GetSubsystem<UPauseManagerSubsystem>();
UPauseReason* MyPause = PM->CreatePauseReason(MyTags::Pause_Inventory, this);
// ...
PM->DeactivatePauseReason(MyPause);
```

## Project Settings > Plugins > Easy Pause Manager
| Setting | Default | |
|---|---|---|
| Root Pause Tag | `Pause` | All pause tags should sit under this. Tags outside it still pause, with a warning. |
| Warn On PIE End With Active Pauses | on | Lists unreleased reasons in the PIE message log. |
| Auto Release Dead Requesters | on | Releases reasons whose requester was destroyed (checked every 0.25s, real time). |
| Pause On Focus Lost / tag | on / `Pause.Platform.FocusLost` | |
| Pause On Controller Disconnect / tag | on / `Pause.Platform.ControllerDisconnected` | |
| Enable Platform Hooks In PIE | off | Prevents clicking out of the editor from pausing PIE. |

If you change the root tag, also point the two platform tags at tags under your new root.

## Gameplay tags
All pause tags live in the plugin's tag source, `Config/Tags/EasyPauseManagerTags.ini`.
It ships with `Pause`, `Pause.Platform.FocusLost` and `Pause.Platform.ControllerDisconnected`.
When adding a new pause tag (e.g. `Pause.Menu`), pick `EasyPauseManagerTags.ini` as the
source so every pause tag stays in one file. The plugin registers this source itself at startup.

Pause tag pickers (Request Pause, Release Pauses With Tag, Has Pause Reason With Tag, and the
platform tag settings) only show tags under the Root Pause Tag. This uses the Gameplay Tags
"Category Remapping" feature: the plugin maps the category `EasyPauseManagerRoot` to your root
each editor session, and again whenever you change the root. Use
`meta = (Categories = "EasyPauseManagerRoot")` on your own C++ pause tag properties to get the same filter.

## Console
- `EasyPause.List` lists active reasons, requesters and how long they've been held.
- `EasyPause.ForceUnpause` clears everything and unpauses (cheat flag, so not available in Shipping).
- `EasyPause.ShowDebug 1` shows an on-screen overlay. Reasons whose requester is destroyed show in red.

## Notes
- Pause reasons live on the Game Instance, so they survive level loads. The pause
  is re-applied automatically after a map loads.
- `SetGamePaused` needs a local player controller. If it's rejected, a warning is logged.
- `SetGamePaused` is server-authoritative. For online co-op, clients can't pause the world.
- Widgets and actors that must run while paused need "Tick Even When Paused".
