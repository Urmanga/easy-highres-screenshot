// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenshotPluginSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeScreenshotPluginSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ScreenshotPlugin(ETypeConstructPhase);
SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings(ETypeConstructPhase);
SCREENSHOTPLUGIN_API UClass* Z_Construct_UClass_UScreenshotPluginSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UScreenshotPluginSettings ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UScreenshotPluginSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshotPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UScreenshotPluginSettings Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResolutionMultiplier = { "ResolutionMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenshotPluginSettings, ResolutionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionMultiplier_MetaData), NewProp_ResolutionMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResolutionMultiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UScreenshotPluginSettings Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ScreenshotPlugin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UScreenshotPluginSettings,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UScreenshotPluginSettings;
UClass* Z_Construct_UClass_UScreenshotPluginSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UScreenshotPluginSettings;
		if (!Z_Registration_Info_UClass_UScreenshotPluginSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ScreenshotPluginSettings"),
				Z_Registration_Info_UClass_UScreenshotPluginSettings.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenshotPluginSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UScreenshotPluginSettings);
UScreenshotPluginSettings::~UScreenshotPluginSettings() {}
// ********** End Class UScreenshotPluginSettings **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenshotPluginSettings, TEXT("UScreenshotPluginSettings"), &Z_Registration_Info_UClass_UScreenshotPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenshotPluginSettings), 3069968433U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ScreenshotPlugin_Source_ScreenshotPlugin_Public_ScreenshotPluginSettings_h__Script_ScreenshotPlugin_e9a46b48e9ff4ddbec019413397e7515116f848d{
	TEXT("/Script/ScreenshotPlugin"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
