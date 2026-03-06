# Easy HighRes Screenshot

Unreal Engine editor plugin that adds a toolbar/menu action for taking a screenshot from the editor.

## Repository Layout

- `ScreenshotPlugin/` contains the source plugin.
- `Releases/UE_5.4/` contains the existing Windows build kept as a legacy artifact.
- `Releases/UE_5.5/` contains the existing Windows build kept as a legacy artifact.
- `Releases/UE_5.6/` contains a clean Windows package rebuilt from the current source tree.
- `Releases/UE_5.7/` contains a clean Windows package rebuilt from the current source tree.

Copy a packaged plugin from `Releases/<version>/` into either `Engine/Plugins/` or `YourProject/Plugins/`.

Release binaries are stored with Git LFS.

## Build Notes

- `UE 5.4` still does not rebuild on this machine. Even after updating Visual Studio to `17.14` / `MSVC 14.44`, the local `UE 5.4` install still fails in engine headers during `SharedPCH.UnrealEd.Cpp20.cpp`.
- `UE 5.5` was not rebuilt during this cleanup because the local `UE_5.5` installation is missing `AutomationTool` / `RunUAT.bat`.
- `UE 5.6` was rebuilt successfully from the current source tree.
- `UE 5.7` was rebuilt successfully after updating Visual Studio to `17.14.27` and installing `MSVC 14.44.35207`.

## Rebuild Example

```powershell
& 'C:\Program Files\Epic Games\UE_5.6\Engine\Build\BatchFiles\RunUAT.bat' `
  BuildPlugin `
  -Plugin='G:\Github\easy-highres-screenshot\ScreenshotPlugin\ScreenshotPlugin.uplugin' `
  -Package='G:\Github\easy-highres-screenshot\Releases\UE_5.6' `
  -TargetPlatforms=Win64 `
  -Rocket
```
