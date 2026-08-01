#include "ScreenshotPluginCommands.h"

#define LOCTEXT_NAMESPACE "FScreenshotPluginModule"

void FScreenshotPluginCommands::RegisterCommands()
{
	UI_COMMAND(
		TakeScreenshot,
		"HiRes Screenshot",
		"Take a high resolution screenshot. The multiplier is set in Project Settings > Plugins > Easy HighRes Screenshot.",
		EUserInterfaceActionType::Button,
		FInputChord());
}

#undef LOCTEXT_NAMESPACE
