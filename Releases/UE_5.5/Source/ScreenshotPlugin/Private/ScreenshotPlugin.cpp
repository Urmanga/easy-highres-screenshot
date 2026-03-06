#include "ScreenshotPlugin.h"
#include "ScreenshotPluginCommands.h"
#include "ScreenshotPluginStyle.h"

#include "ToolMenus.h"

#include "Engine/Engine.h"
#include "Framework/Commands/UICommandList.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

namespace ScreenshotPlugin
{
constexpr int32 ScreenshotMultiplier = 2;
const FName MainMenuName(TEXT("LevelEditor.MainMenu.Window"));
const FName MainMenuSectionName(TEXT("WindowLayout"));
const FName ToolbarMenuName(TEXT("LevelEditor.LevelEditorToolBar.PlayToolBar"));
const FName ToolbarSectionName(TEXT("PluginTools"));

void ShowNotification(const FText& Message, SNotificationItem::ECompletionState CompletionState)
{
	FNotificationInfo Notification(Message);
	Notification.bFireAndForget = true;
	Notification.bUseSuccessFailIcons = true;
	Notification.ExpireDuration = 3.0f;
	Notification.FadeOutDuration = 0.5f;

	if (const TSharedPtr<SNotificationItem> NotificationItem = FSlateNotificationManager::Get().AddNotification(Notification))
	{
		NotificationItem->SetCompletionState(CompletionState);
	}
}
}

#define LOCTEXT_NAMESPACE "FScreenshotPluginModule"

void FScreenshotPluginModule::StartupModule()
{
	FScreenshotPluginStyle::Initialize();
	FScreenshotPluginStyle::ReloadTextures();

	FScreenshotPluginCommands::Register();

	PluginCommands = MakeShared<FUICommandList>();
	PluginCommands->MapAction(
		FScreenshotPluginCommands::Get().TakeScreenshot,
		FExecuteAction::CreateRaw(this, &FScreenshotPluginModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(
		FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FScreenshotPluginModule::RegisterMenus));
}

void FScreenshotPluginModule::ShutdownModule()
{
	if (UToolMenus::TryGet() != nullptr)
	{
		UToolMenus::UnRegisterStartupCallback(this);
		UToolMenus::UnregisterOwner(this);
	}

	PluginCommands.Reset();

	FScreenshotPluginCommands::Unregister();
	FScreenshotPluginStyle::Shutdown();
}

void FScreenshotPluginModule::PluginButtonClicked()
{
	if (GEngine == nullptr)
	{
		ScreenshotPlugin::ShowNotification(
			LOCTEXT("ScreenshotFailedNoEngine", "Unable to capture screenshot: engine is not available."),
			SNotificationItem::CS_Fail);
		return;
	}

	const FString Command = FString::Printf(TEXT("HighResShot %d"), ScreenshotPlugin::ScreenshotMultiplier);
	const bool bCommandSucceeded = GEngine->Exec(nullptr, *Command);
	if (!bCommandSucceeded)
	{
		ScreenshotPlugin::ShowNotification(
			LOCTEXT("ScreenshotFailed", "Failed to capture high resolution screenshot."),
			SNotificationItem::CS_Fail);
		return;
	}

	ScreenshotPlugin::ShowNotification(
		LOCTEXT("ScreenshotTaken", "High resolution screenshot (2x) captured."),
		SNotificationItem::CS_Success);
}

void FScreenshotPluginModule::RegisterMenus()
{
	if (!PluginCommands.IsValid())
	{
		return;
	}

	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* MainMenu = UToolMenus::Get()->ExtendMenu(ScreenshotPlugin::MainMenuName);
	FToolMenuSection& MainSection = MainMenu->FindOrAddSection(ScreenshotPlugin::MainMenuSectionName);
	MainSection.AddMenuEntryWithCommandList(FScreenshotPluginCommands::Get().TakeScreenshot, PluginCommands);

	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu(ScreenshotPlugin::ToolbarMenuName);
	FToolMenuSection& ToolbarSection = ToolbarMenu->FindOrAddSection(ScreenshotPlugin::ToolbarSectionName);
	FToolMenuEntry& ToolbarEntry =
		ToolbarSection.AddEntry(FToolMenuEntry::InitToolBarButton(FScreenshotPluginCommands::Get().TakeScreenshot));
	ToolbarEntry.SetCommandList(PluginCommands);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FScreenshotPluginModule, ScreenshotPlugin)
