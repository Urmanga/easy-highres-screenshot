#include "ScreenshotPluginCommands.h"

#define LOCTEXT_NAMESPACE "FScreenshotPluginModule"

void FScreenshotPluginCommands::RegisterCommands()
{
	UI_COMMAND(
		TakeScreenshot,
		"HiRes Screenshot",
		"Take a high resolution screenshot (2x)",
		EUserInterfaceActionType::Button,
		FInputChord());
}

#undef LOCTEXT_NAMESPACE
