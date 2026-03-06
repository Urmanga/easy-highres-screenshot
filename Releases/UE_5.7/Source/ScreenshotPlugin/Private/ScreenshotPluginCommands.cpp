#include "ScreenshotPluginCommands.h"

#define LOCTEXT_NAMESPACE "FScreenshotPluginModule"

void FScreenshotPluginCommands::RegisterCommands()
{
	UI_COMMAND(
		TakeScreenshot,
		"HiRes Screenshot",
		"Take a screenshot (1x)",
		EUserInterfaceActionType::Button,
		FInputChord());
}

#undef LOCTEXT_NAMESPACE
