#include "ScreenshotPluginStyle.h"

#include "Framework/Application/SlateApplication.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Styling/SlateStyleMacros.h"
#include "Styling/SlateStyleRegistry.h"

#define RootToContentDir Style->RootToContentDir

namespace ScreenshotPluginStyle
{
const FVector2D Icon40x40(40.0f, 40.0f);
const FName StyleSetName(TEXT("ScreenshotPluginStyle"));
}

TSharedPtr<FSlateStyleSet> FScreenshotPluginStyle::StyleInstance = nullptr;

void FScreenshotPluginStyle::Initialize()
{
	if (StyleInstance.IsValid())
	{
		return;
	}

	StyleInstance = Create();
	FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
}

void FScreenshotPluginStyle::Shutdown()
{
	if (!StyleInstance.IsValid())
	{
		return;
	}

	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FScreenshotPluginStyle::GetStyleSetName()
{
	return ScreenshotPluginStyle::StyleSetName;
}

TSharedRef< FSlateStyleSet > FScreenshotPluginStyle::Create()
{
	const TSharedRef<FSlateStyleSet> Style = MakeShared<FSlateStyleSet>(GetStyleSetName());

	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("ScreenshotPlugin"));
	const FString ContentRoot = Plugin.IsValid()
		? (Plugin->GetBaseDir() / TEXT("Resources"))
		: FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("ScreenshotPlugin"), TEXT("Resources"));

	ensureMsgf(Plugin.IsValid(), TEXT("Could not resolve ScreenshotPlugin from IPluginManager. Falling back to ProjectPluginsDir."));
	Style->SetContentRoot(ContentRoot);

	Style->Set("ScreenshotPlugin.TakeScreenshot", new IMAGE_BRUSH_SVG(TEXT("CameraIcon"), ScreenshotPluginStyle::Icon40x40));

	return Style;
}

void FScreenshotPluginStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

#undef RootToContentDir
