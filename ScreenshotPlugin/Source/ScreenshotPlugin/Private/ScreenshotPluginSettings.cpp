#include "ScreenshotPluginSettings.h"

UScreenshotPluginSettings::UScreenshotPluginSettings()
{
	CategoryName = TEXT("Plugins");
}

int32 UScreenshotPluginSettings::GetClampedResolutionMultiplier() const
{
	return FMath::Clamp(ResolutionMultiplier, 1, 16);
}
