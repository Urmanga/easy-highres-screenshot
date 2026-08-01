#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "ScreenshotPluginSettings.generated.h"

/** Settings for the Easy HighRes Screenshot toolbar action, exposed under Project Settings > Plugins. */
UCLASS(config = Editor, defaultconfig, meta = (DisplayName = "Easy HighRes Screenshot"))
class UScreenshotPluginSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UScreenshotPluginSettings();

	/** Multiplier clamped to the range the settings UI allows, so a hand-edited ini cannot break the capture. */
	int32 GetClampedResolutionMultiplier() const;

	/**
	 * Resolution multiplier applied to the viewport when the toolbar button is pressed.
	 * 2 captures at twice the viewport resolution; 1 captures at the viewport resolution.
	 * Large values are memory hungry - the engine allocates the full target before writing it out.
	 */
	UPROPERTY(config, EditAnywhere, Category = "Capture",
		meta = (ClampMin = "1", ClampMax = "16", UIMin = "1", UIMax = "8"))
	int32 ResolutionMultiplier = 2;
};
