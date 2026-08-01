// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenshotPluginSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeScreenshotPluginSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings();
SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ScreenshotPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UScreenshotPluginSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UScreenshotPluginSettings;
UClass* UScreenshotPluginSettings::GetPrivateStaticClass()
{
	using TClass = UScreenshotPluginSettings;
	if (!Z_Registration_Info_UClass_UScreenshotPluginSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ScreenshotPluginSettings"),
			Z_Registration_Info_UClass_UScreenshotPluginSettings.InnerSingleton,
			StaticRegisterNativesUScreenshotPluginSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UScreenshotPluginSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UScreenshotPluginSettings_NoRegister()
{
	return UScreenshotPluginSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScreenshotPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Easy HighRes Screenshot toolbar action, exposed under Project Settings > Plugins. */" },
		{ "DisplayName", "Easy HighRes Screenshot" },
		{ "IncludePath", "ScreenshotPluginSettings.h" },
		{ "ModuleRelativePath", "Public/ScreenshotPluginSettings.h" },
		{ "ToolTip", "Settings for the Easy HighRes Screenshot toolbar action, exposed under Project Settings > Plugins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMultiplier_MetaData[] = {
		{ "Category", "Capture" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Resolution multiplier applied to the viewport when the toolbar button is pressed.\n\x09 * 2 captures at twice the viewport resolution; 1 captures at the viewport resolution.\n\x09 * Large values are memory hungry - the engine allocates the full target before writing it out.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScreenshotPluginSettings.h" },
		{ "ToolTip", "Resolution multiplier applied to the viewport when the toolbar button is pressed.\n2 captures at twice the viewport resolution; 1 captures at the viewport resolution.\nLarge values are memory hungry - the engine allocates the full target before writing it out." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA

// ********** Begin Class UScreenshotPluginSettings constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UScreenshotPluginSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshotPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UScreenshotPluginSettings_Statics

// ********** Begin Class UScreenshotPluginSettings Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScreenshotPluginSettings_Statics::NewProp_ResolutionMultiplier = { "ResolutionMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenshotPluginSettings, ResolutionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionMultiplier_MetaData), NewProp_ResolutionMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenshotPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshotPluginSettings_Statics::NewProp_ResolutionMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotPluginSettings_Statics::PropPointers) < 2048);
// ********** End Class UScreenshotPluginSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UScreenshotPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ScreenshotPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenshotPluginSettings_Statics::ClassParams = {
	&UScreenshotPluginSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScreenshotPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotPluginSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenshotPluginSettings_Statics::Class_MetaDataParams)
};
void UScreenshotPluginSettings::StaticRegisterNativesUScreenshotPluginSettings()
{
}
UClass* Z_Construct_UClass_UScreenshotPluginSettings()
{
	if (!Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton, Z_Construct_UClass_UScreenshotPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UScreenshotPluginSettings);
UScreenshotPluginSettings::~UScreenshotPluginSettings() {}
// ********** End Class UScreenshotPluginSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenshotPluginSettings, UScreenshotPluginSettings::StaticClass, TEXT("UScreenshotPluginSettings"), &Z_Registration_Info_UClass_UScreenshotPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenshotPluginSettings), 135040210U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_122051851{
	TEXT("/Script/ScreenshotPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
