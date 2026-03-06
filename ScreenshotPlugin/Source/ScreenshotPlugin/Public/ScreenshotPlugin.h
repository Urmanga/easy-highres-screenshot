#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FScreenshotPluginModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void PluginButtonClicked();

private:
	void RegisterMenus();

	TSharedPtr<class FUICommandList> PluginCommands;
};
