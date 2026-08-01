# Easy HighRes Screenshot

Unreal Engine editor plugin that adds a one-click **HiRes Screenshot** button to the Level Editor
toolbar. Pressing it runs `HighResShot <multiplier>`, capturing the active viewport at a multiple of
its resolution, and reports the result with an editor notification.

Captures land in the usual place: `<YourProject>/Saved/Screenshots/WindowsEditor/`.

The module is editor-only (`"Type": "Editor"`), so it is never compiled into a packaged game.

## Repository Layout

- `ScreenshotPlugin/` — the plugin source.
- `Releases/UE_5.6/`, `Releases/UE_5.7/`, `Releases/UE_5.8/` — clean Windows packages built from
  that source with `RunUAT BuildPlugin`.

Current release: `v0.4.0`. Release binaries are stored with Git LFS, so clone with `git lfs` installed
or run `git lfs pull` afterwards.

## Supported Engine Versions

| Engine | Package | BuildId |
| --- | --- | --- |
| UE 5.8 | `Releases/UE_5.8/` | `55116800` |
| UE 5.7 | `Releases/UE_5.7/` | `47537391` |
| UE 5.6 | `Releases/UE_5.6/` | `43139311` |

The editor loads a prebuilt module only when the `BuildId` in `Binaries/Win64/UnrealEditor.modules`
matches the engine's own. If it does not, the editor offers to rebuild instead.

The source itself is not pinned to an engine version — `ScreenshotPlugin/ScreenshotPlugin.uplugin`
deliberately carries no `EngineVersion` field, and the code only uses API that is stable across
5.4–5.8 (`UToolMenus`, `TCommands`, `FSlateStyleSet`). To target another engine, rebuild from source
with the command below.

Packaged `.uplugin` files under `Releases/` do get an `EngineVersion` and `"Installed": true` — that
is added by `RunUAT BuildPlugin` and is expected.

## Installation

Copy the contents of `Releases/UE_<version>/` into either:

- `<YourProject>/Plugins/ScreenshotPlugin/` — per project, or
- `<EngineRoot>/Engine/Plugins/Marketplace/ScreenshotPlugin/` — for every project on that engine.

Restart the editor. The plugin is enabled by default; verify under
**Edit → Plugins → Editor → Easy HighRes Screenshot**. The button appears in the Level Editor
toolbar, and the same action is listed under **Window**.

Because the packaged `BuildId` matches the engine it was built for, no recompilation is needed —
which means the plugin also works in Blueprint-only projects with no C++ toolchain installed.

## Rebuilding

```powershell
& 'C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\RunUAT.bat' BuildPlugin -Plugin='<repo>\ScreenshotPlugin\ScreenshotPlugin.uplugin' -Package='<repo>\Releases\UE_5.8' -TargetPlatforms=Win64 -Rocket
```

Swap `UE_5.8` for the engine you want. Keep the output path short: UnrealBuildTool aborts when any
intermediate path exceeds 260 characters.

Build notes:

- UE 5.6 — rebuilt from the current source tree.
- UE 5.7 — required Visual Studio `17.14.27` with `MSVC 14.44.35207`.
- UE 5.8 — built with Visual Studio `17.14.31`, `MSVC 14.44.35207`, Windows SDK `10.0.22621.0`.

## Settings

**Project Settings → Plugins → Easy HighRes Screenshot**

| Setting | Default | Range | Effect |
| --- | --- | --- | --- |
| Resolution Multiplier | `2` | 1–16 | Value passed to `HighResShot`. `2` captures at twice the viewport resolution, `1` at viewport resolution. |

Changes take effect on the next capture — no editor restart and no rebuild. The value is stored in
the project's `Config/DefaultEditor.ini`, so it can be committed alongside the project.

High multipliers allocate the entire target before writing it out; on a 4K viewport, `8` means a
30k-pixel-wide render target. The setting is clamped to 16 both in the UI and at capture time.

## Release Checklist

1. Update version metadata in `ScreenshotPlugin/ScreenshotPlugin.uplugin`.
2. Rebuild `Releases/UE_5.6/`, `Releases/UE_5.7/` and `Releases/UE_5.8/` with `RunUAT BuildPlugin`.
3. Confirm release binaries are tracked by Git LFS with `git lfs ls-files`.
4. Commit, create an annotated tag, and push with `git push --follow-tags`.

## Changelog

- **0.4.0** — the multiplier is now a setting under Project Settings → Plugins, defaulting to `2`.
  This also fixes 0.3.0, which shipped a hardcoded `HighResShot 1` — no resolution increase at all,
  despite the plugin's name. Releases rebuilt for 5.6/5.7/5.8.
- **0.3.0** — packaged releases for UE 5.6/5.7/5.8, Git LFS for binaries, simplified toolbar action.
- **0.2** — initial toolbar button.

## License

[MIT](LICENSE)
