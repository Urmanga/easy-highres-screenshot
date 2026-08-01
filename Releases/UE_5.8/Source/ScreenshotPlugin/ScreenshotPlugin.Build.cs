using UnrealBuildTool;

public class ScreenshotPlugin : ModuleRules
{
	public ScreenshotPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core"
			});

		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				"CoreUObject",
				"DeveloperSettings",
				"Engine",
				"InputCore",
				"LevelEditor",
				"Projects",
				"Slate",
				"SlateCore",
				"ToolMenus",
				"UnrealEd"
			});
	}
}
