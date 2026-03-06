#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ScreenshotPluginStyle.h"

class FScreenshotPluginCommands : public TCommands<FScreenshotPluginCommands>
{
public:
	FScreenshotPluginCommands()
		: TCommands<FScreenshotPluginCommands>(
			TEXT("ScreenshotPlugin"),
			NSLOCTEXT("Contexts", "ScreenshotPlugin", "Screenshot Plugin"),
			NAME_None,
			FScreenshotPluginStyle::GetStyleSetName())
	{
	}

	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo> TakeScreenshot;
};
