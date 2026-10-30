// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PauseReason.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePauseReason() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseReason();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseReason_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EasyPauseManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPauseReason Function IsRequesterDead ************************************
struct Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics
{
	struct PauseReason_eventIsRequesterDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if a requester was given and has since been destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if a requester was given and has since been destroyed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsRequesterDead constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRequesterDead constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRequesterDead Property Definitions **********************************
void Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PauseReason_eventIsRequesterDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseReason_eventIsRequesterDead_Parms), &Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PropPointers) < 2048);
// ********** End Function IsRequesterDead Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseReason, nullptr, "IsRequesterDead", 	Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PauseReason_eventIsRequesterDead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::PauseReason_eventIsRequesterDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseReason_IsRequesterDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseReason_IsRequesterDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseReason::execIsRequesterDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRequesterDead();
	P_NATIVE_END;
}
// ********** End Class UPauseReason Function IsRequesterDead **************************************

// ********** Begin Class UPauseReason Function ToDebugString **************************************
struct Z_Construct_UFunction_UPauseReason_ToDebugString_Statics
{
	struct PauseReason_eventToDebugString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
		{ "ModuleRelativePath", "Public/PauseReason.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToDebugString constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToDebugString constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToDebugString Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseReason_eventToDebugString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PropPointers) < 2048);
// ********** End Function ToDebugString Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseReason, nullptr, "ToDebugString", 	Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PauseReason_eventToDebugString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::PauseReason_eventToDebugString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseReason_ToDebugString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseReason_ToDebugString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseReason::execToDebugString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToDebugString();
	P_NATIVE_END;
}
// ********** End Class UPauseReason Function ToDebugString ****************************************

// ********** Begin Class UPauseReason *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPauseReason;
UClass* UPauseReason::GetPrivateStaticClass()
{
	using TClass = UPauseReason;
	if (!Z_Registration_Info_UClass_UPauseReason.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PauseReason"),
			Z_Registration_Info_UClass_UPauseReason.InnerSingleton,
			StaticRegisterNativesUPauseReason,
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
	return Z_Registration_Info_UClass_UPauseReason.InnerSingleton;
}
UClass* Z_Construct_UClass_UPauseReason_NoRegister()
{
	return UPauseReason::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPauseReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single pause request. Whoever creates one holds onto it and hands it back\n * to Release Pause / Deactivate Pause Reason when they no longer need the game paused.\n */" },
#endif
		{ "IncludePath", "PauseReason.h" },
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single pause request. Whoever creates one holds onto it and hands it back\nto Release Pause / Deactivate Pause Reason when they no longer need the game paused." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Why the game is paused, e.g. Pause.Menu, Pause.Cutscene, Pause.Inventory. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Why the game is paused, e.g. Pause.Menu, Pause.Cutscene, Pause.Inventory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The object that requested the pause. Weak, so it never keeps the requester alive. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object that requested the pause. Weak, so it never keeps the requester alive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequesterName_MetaData[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requester's name captured at creation, so it can still be reported after the requester is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requester's name captured at creation, so it can still be reported after the requester is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAtRealTime_MetaData[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Real time (seconds since app start) the reason was created. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseReason.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Real time (seconds since app start) the reason was created." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UPauseReason constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequesterName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CreatedAtRealTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPauseReason constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsRequesterDead"), .Pointer = &UPauseReason::execIsRequesterDead },
		{ .NameUTF8 = UTF8TEXT("ToDebugString"), .Pointer = &UPauseReason::execToDebugString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseReason_IsRequesterDead, "IsRequesterDead" }, // 2470327861
		{ &Z_Construct_UFunction_UPauseReason_ToDebugString, "ToDebugString" }, // 3723074742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseReason>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPauseReason_Statics

// ********** Begin Class UPauseReason Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPauseReason_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseReason, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPauseReason_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseReason, Requester), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPauseReason_Statics::NewProp_RequesterName = { "RequesterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseReason, RequesterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequesterName_MetaData), NewProp_RequesterName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPauseReason_Statics::NewProp_CreatedAtRealTime = { "CreatedAtRealTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseReason, CreatedAtRealTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedAtRealTime_MetaData), NewProp_CreatedAtRealTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseReason_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseReason_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseReason_Statics::NewProp_RequesterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseReason_Statics::NewProp_CreatedAtRealTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseReason_Statics::PropPointers) < 2048);
// ********** End Class UPauseReason Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UPauseReason_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyPauseManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseReason_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseReason_Statics::ClassParams = {
	&UPauseReason::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseReason_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseReason_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseReason_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseReason_Statics::Class_MetaDataParams)
};
void UPauseReason::StaticRegisterNativesUPauseReason()
{
	UClass* Class = UPauseReason::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPauseReason_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPauseReason()
{
	if (!Z_Registration_Info_UClass_UPauseReason.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseReason.OuterSingleton, Z_Construct_UClass_UPauseReason_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseReason.OuterSingleton;
}
UPauseReason::UPauseReason(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPauseReason);
UPauseReason::~UPauseReason() {}
// ********** End Class UPauseReason ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h__Script_EasyPauseManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseReason, UPauseReason::StaticClass, TEXT("UPauseReason"), &Z_Registration_Info_UClass_UPauseReason, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseReason), 2301848661U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h__Script_EasyPauseManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h__Script_EasyPauseManager_2101594584{
	TEXT("/Script/EasyPauseManager"),
	Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h__Script_EasyPauseManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h__Script_EasyPauseManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
