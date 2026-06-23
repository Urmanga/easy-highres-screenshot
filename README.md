# Easy HighRes Screenshot

Unreal Engine editor plugin that adds a toolbar/menu action for taking a screenshot from the editor.

## Repository Layout

- `ScreenshotPlugin/` contains the source plugin.
- `Releases/UE_5.6/` contains a clean Windows package rebuilt from the current source tree.
- `Releases/UE_5.7/` contains a clean Windows package rebuilt from the current source tree.
- `Releases/UE_5.8/` contains a clean Windows package rebuilt from the current source tree.

Current release: `v0.3.0`

Copy a packaged plugin from `Releases/<version>/` into either `Engine/Plugins/` or `YourProject/Plugins/`.

Release binaries are stored with Git LFS.

## Build Notes

- `UE 5.6` was rebuilt successfully from the current source tree.
- `UE 5.7` was rebuilt successfully after updating Visual Studio to `17.14.27` and installing `MSVC 14.44.35207`.
- `UE 5.8` was rebuilt successfully with Visual Studio `17.14.31`, `MSVC 14.44.35207`, and Windows SDK `10.0.22621.0`.

## Rebuild Example

```powershell
& 'C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\RunUAT.bat' `
  BuildPlugin `
  -Plugin='G:\Github\easy-highres-screenshot\ScreenshotPlugin\ScreenshotPlugin.uplugin' `
  -Package='G:\Github\easy-highres-screenshot\Releases\UE_5.8' `
  -TargetPlatforms=Win64 `
  -Rocket
```

## Release Checklist

1. Update `ScreenshotPlugin/ScreenshotPlugin.uplugin` version metadata.
2. Rebuild `Releases/UE_5.6/`, `Releases/UE_5.7/`, and `Releases/UE_5.8/` with `RunUAT BuildPlugin`.
3. Confirm release binaries are tracked by Git LFS with `git lfs ls-files`.
4. Commit the release, create an annotated tag, and push `main --follow-tags`.
