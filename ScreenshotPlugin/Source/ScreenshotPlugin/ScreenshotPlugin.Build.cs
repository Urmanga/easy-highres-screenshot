using UnrealBuildTool;

public class ScreenshotPlugin : ModuleRules
{
public ScreenshotPlugin(ReadOnlyTargetRules Target) : base(Target)
{
PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

PublicIncludePaths.AddRange(
new string[] {
}
);

PrivateIncludePaths.AddRange(
new string[] {
}
);

PublicDependencyModuleNames.AddRange(
new string[]
{
"Core",
"CoreUObject",
"Engine",
"UnrealEd",
"ToolMenus",
"Slate",
"SlateCore",
"EditorStyle",
"EditorWidgets",
"ToolWidgets",
"Projects"
}
);

PrivateDependencyModuleNames.AddRange(
new string[]
{
"LevelEditor",
"MainFrame",
"DesktopPlatform",
"ToolMenus",
"EditorWidgets",
"Slate",
"SlateCore"
}
);

DynamicallyLoadedModuleNames.AddRange(
new string[]
{
}
);
}
}
