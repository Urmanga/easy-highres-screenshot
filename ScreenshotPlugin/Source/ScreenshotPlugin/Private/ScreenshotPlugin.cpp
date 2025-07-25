#include "ScreenshotPlugin.h"
#include "ScreenshotPluginStyle.h"
#include "ScreenshotPluginCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "Engine/Engine.h"
#include "UnrealClient.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

static const FName ScreenshotPluginTabName("ScreenshotPlugin");

#define LOCTEXT_NAMESPACE "FScreenshotPluginModule"

void FScreenshotPluginModule::StartupModule()
{
// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

FScreenshotPluginStyle::Initialize();
FScreenshotPluginStyle::ReloadTextures();

FScreenshotPluginCommands::Register();

PluginCommands = MakeShareable(new FUICommandList);

PluginCommands->MapAction(
FScreenshotPluginCommands::Get().OpenPluginWindow,
FExecuteAction::CreateRaw(this, &FScreenshotPluginModule::PluginButtonClicked),
FCanExecuteAction());

UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FScreenshotPluginModule::RegisterMenus));
}

void FScreenshotPluginModule::ShutdownModule()
{
// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
// we call this function before unloading the module.

UToolMenus::UnRegisterStartupCallback(this);

UToolMenus::UnregisterOwner(this);

FScreenshotPluginStyle::Shutdown();

FScreenshotPluginCommands::Unregister();
}

void FScreenshotPluginModule::PluginButtonClicked()
{
// Execute high resolution screenshot command with 2x multiplier
if (GEngine)
{
// Execute the high resolution screenshot command
GEngine->Exec(nullptr, TEXT("HighResShot 2"));

// Show notification
FNotificationInfo Info(LOCTEXT("ScreenshotTaken", "High Resolution Screenshot (2x) taken!"));
Info.bFireAndForget = true;
Info.FadeOutDuration = 3.0f;
Info.ExpireDuration = 3.0f;

FSlateNotificationManager::Get().AddNotification(Info);
}
}

void FScreenshotPluginModule::RegisterMenus()
{
// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
FToolMenuOwnerScoped OwnerScoped(this);

{
UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
{
FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
Section.AddMenuEntryWithCommandList(FScreenshotPluginCommands::Get().OpenPluginWindow, PluginCommands);
}
}

{
UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
{
FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
{
FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FScreenshotPluginCommands::Get().OpenPluginWindow));
Entry.SetCommandList(PluginCommands);
}
}
}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FScreenshotPluginModule, ScreenshotPlugin)
