// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyPauseSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEasyPauseSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UEasyPauseSettings();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UEasyPauseSettings_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EasyPauseManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEasyPauseSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEasyPauseSettings;
UClass* UEasyPauseSettings::GetPrivateStaticClass()
{
	using TClass = UEasyPauseSettings;
	if (!Z_Registration_Info_UClass_UEasyPauseSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EasyPauseSettings"),
			Z_Registration_Info_UClass_UEasyPauseSettings.InnerSingleton,
			StaticRegisterNativesUEasyPauseSettings,
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
	return Z_Registration_Info_UClass_UEasyPauseSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UEasyPauseSettings_NoRegister()
{
	return UEasyPauseSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEasyPauseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Project Settings > Plugins > Easy Pause Manager */" },
#endif
		{ "DisplayName", "Easy Pause Manager" },
		{ "IncludePath", "EasyPauseSettings.h" },
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Settings > Plugins > Easy Pause Manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPauseTag_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Every pause tag should sit under this root. Request Pause and other pause tag pickers only show tags under it. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Every pause tag should sit under this root. Request Pause and other pause tag pickers only show tags under it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnOnPIEEndWithActivePauses_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Log (and show in the PIE message log) any pause reasons still active when a Play-In-Editor session ends. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log (and show in the PIE message log) any pause reasons still active when a Play-In-Editor session ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReleaseDeadRequesters_MetaData[] = {
		{ "Category", "Safety" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically release pause reasons whose Requester has been destroyed without releasing them. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically release pause reasons whose Requester has been destroyed without releasing them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadRequesterCheckInterval_MetaData[] = {
		{ "Category", "Safety" },
		{ "ClampMin", "0.05" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How often (real seconds) to check for dead requesters. Runs while paused. */" },
#endif
		{ "EditCondition", "bAutoReleaseDeadRequesters" },
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often (real seconds) to check for dead requesters. Runs while paused." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnFocusLost_MetaData[] = {
		{ "Category", "Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pause while the game window/app is not focused. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause while the game window/app is not focused." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusLostTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
		{ "Category", "Platform" },
		{ "EditCondition", "bPauseOnFocusLost" },
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnControllerDisconnect_MetaData[] = {
		{ "Category", "Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pause while any input device is disconnected. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause while any input device is disconnected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerDisconnectedTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
		{ "Category", "Platform" },
		{ "EditCondition", "bPauseOnControllerDisconnect" },
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePlatformHooksInPIE_MetaData[] = {
		{ "Category", "Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform hooks are off in PIE by default, so clicking out of the editor viewport doesn't pause your session. */" },
#endif
		{ "ModuleRelativePath", "Public/EasyPauseSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform hooks are off in PIE by default, so clicking out of the editor viewport doesn't pause your session." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEasyPauseSettings constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootPauseTag;
	static void NewProp_bWarnOnPIEEndWithActivePauses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnOnPIEEndWithActivePauses;
	static void NewProp_bAutoReleaseDeadRequesters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReleaseDeadRequesters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadRequesterCheckInterval;
	static void NewProp_bPauseOnFocusLost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnFocusLost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusLostTag;
	static void NewProp_bPauseOnControllerDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnControllerDisconnect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerDisconnectedTag;
	static void NewProp_bEnablePlatformHooksInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePlatformHooksInPIE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEasyPauseSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyPauseSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEasyPauseSettings_Statics

// ********** Begin Class UEasyPauseSettings Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_RootPauseTag = { "RootPauseTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyPauseSettings, RootPauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPauseTag_MetaData), NewProp_RootPauseTag_MetaData) }; // 517357616
void Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bWarnOnPIEEndWithActivePauses_SetBit(void* Obj)
{
	((UEasyPauseSettings*)Obj)->bWarnOnPIEEndWithActivePauses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bWarnOnPIEEndWithActivePauses = { "bWarnOnPIEEndWithActivePauses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyPauseSettings), &Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bWarnOnPIEEndWithActivePauses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnOnPIEEndWithActivePauses_MetaData), NewProp_bWarnOnPIEEndWithActivePauses_MetaData) };
void Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bAutoReleaseDeadRequesters_SetBit(void* Obj)
{
	((UEasyPauseSettings*)Obj)->bAutoReleaseDeadRequesters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bAutoReleaseDeadRequesters = { "bAutoReleaseDeadRequesters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyPauseSettings), &Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bAutoReleaseDeadRequesters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReleaseDeadRequesters_MetaData), NewProp_bAutoReleaseDeadRequesters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_DeadRequesterCheckInterval = { "DeadRequesterCheckInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyPauseSettings, DeadRequesterCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadRequesterCheckInterval_MetaData), NewProp_DeadRequesterCheckInterval_MetaData) };
void Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnFocusLost_SetBit(void* Obj)
{
	((UEasyPauseSettings*)Obj)->bPauseOnFocusLost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnFocusLost = { "bPauseOnFocusLost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyPauseSettings), &Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnFocusLost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnFocusLost_MetaData), NewProp_bPauseOnFocusLost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_FocusLostTag = { "FocusLostTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyPauseSettings, FocusLostTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusLostTag_MetaData), NewProp_FocusLostTag_MetaData) }; // 517357616
void Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnControllerDisconnect_SetBit(void* Obj)
{
	((UEasyPauseSettings*)Obj)->bPauseOnControllerDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnControllerDisconnect = { "bPauseOnControllerDisconnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyPauseSettings), &Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnControllerDisconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnControllerDisconnect_MetaData), NewProp_bPauseOnControllerDisconnect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_ControllerDisconnectedTag = { "ControllerDisconnectedTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyPauseSettings, ControllerDisconnectedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerDisconnectedTag_MetaData), NewProp_ControllerDisconnectedTag_MetaData) }; // 517357616
void Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bEnablePlatformHooksInPIE_SetBit(void* Obj)
{
	((UEasyPauseSettings*)Obj)->bEnablePlatformHooksInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bEnablePlatformHooksInPIE = { "bEnablePlatformHooksInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEasyPauseSettings), &Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bEnablePlatformHooksInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePlatformHooksInPIE_MetaData), NewProp_bEnablePlatformHooksInPIE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyPauseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_RootPauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bWarnOnPIEEndWithActivePauses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bAutoReleaseDeadRequesters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_DeadRequesterCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnFocusLost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_FocusLostTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bPauseOnControllerDisconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_ControllerDisconnectedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyPauseSettings_Statics::NewProp_bEnablePlatformHooksInPIE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyPauseSettings_Statics::PropPointers) < 2048);
// ********** End Class UEasyPauseSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UEasyPauseSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyPauseManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyPauseSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyPauseSettings_Statics::ClassParams = {
	&UEasyPauseSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEasyPauseSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyPauseSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyPauseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyPauseSettings_Statics::Class_MetaDataParams)
};
void UEasyPauseSettings::StaticRegisterNativesUEasyPauseSettings()
{
}
UClass* Z_Construct_UClass_UEasyPauseSettings()
{
	if (!Z_Registration_Info_UClass_UEasyPauseSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyPauseSettings.OuterSingleton, Z_Construct_UClass_UEasyPauseSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyPauseSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEasyPauseSettings);
UEasyPauseSettings::~UEasyPauseSettings() {}
// ********** End Class UEasyPauseSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h__Script_EasyPauseManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyPauseSettings, UEasyPauseSettings::StaticClass, TEXT("UEasyPauseSettings"), &Z_Registration_Info_UClass_UEasyPauseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyPauseSettings), 2675842734U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h__Script_EasyPauseManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h__Script_EasyPauseManager_2967330072{
	TEXT("/Script/EasyPauseManager"),
	Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h__Script_EasyPauseManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_EasyPauseSettings_h__Script_EasyPauseManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
