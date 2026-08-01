// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenshotPluginSettings.h"

#ifdef SCREENSHOTPLUGIN_ScreenshotPluginSettings_generated_h
#error "ScreenshotPluginSettings.generated.h already included, missing '#pragma once' in ScreenshotPluginSettings.h"
#endif
#define SCREENSHOTPLUGIN_ScreenshotPluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScreenshotPluginSettings ************************************************
SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings_NoRegister();

#define FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenshotPluginSettings(); \
	friend struct Z_Construct_UClass_UScreenshotPluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UScreenshotPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScreenshotPlugin"), Z_Construct_UClass_UScreenshotPluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UScreenshotPluginSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreenshotPluginSettings(UScreenshotPluginSettings&&) = delete; \
	UScreenshotPluginSettings(const UScreenshotPluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshotPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshotPluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenshotPluginSettings) \
	NO_API virtual ~UScreenshotPluginSettings();


#define FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_9_PROLOG
#define FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreenshotPluginSettings;

// ********** End Class UScreenshotPluginSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
