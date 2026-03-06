# Easy HighRes Screenshot

Unreal Engine editor plugin that adds a toolbar/menu action for taking a screenshot from the editor.

## Repository Layout

- `ScreenshotPlugin/` contains the source plugin.
- `Releases/UE_5.4/` contains the existing Windows build kept as a legacy artifact.
- `Releases/UE_5.5/` contains the existing Windows build kept as a legacy artifact.
- `Releases/UE_5.6/` contains a clean Windows package rebuilt from the current source tree.

Copy a packaged plugin from `Releases/<version>/` into either `Engine/Plugins/` or `YourProject/Plugins/`.

## Build Notes

- `UE 5.4` was not rebuilt during this cleanup because the installed MSVC `14.43` toolchain hits a known compiler incompatibility in `UE 5.4`.
- `UE 5.5` was not rebuilt during this cleanup because the local `UE_5.5` installation is missing `AutomationTool` / `RunUAT.bat`.
- `UE 5.6` was rebuilt successfully from the current source tree.
- `UE 5.7` is not packaged in this repo snapshot because `UE 5.7` rejects the installed MSVC `14.43` toolchain and requires `14.44+`.

## Rebuild Example

```powershell
& 'C:\Program Files\Epic Games\UE_5.6\Engine\Build\BatchFiles\RunUAT.bat' `
  BuildPlugin `
  -Plugin='G:\Github\easy-highres-screenshot\ScreenshotPlugin\ScreenshotPlugin.uplugin' `
  -Package='G:\Github\easy-highres-screenshot\Releases\UE_5.6' `
  -TargetPlatforms=Win64 `
  -Rocket
```
