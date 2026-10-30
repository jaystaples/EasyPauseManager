// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PauseManagerBlueprintLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePauseManagerBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerBlueprintLibrary();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerBlueprintLibrary_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerSubsystem_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseReason_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EasyPauseManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPauseManagerBlueprintLibrary Function GetPauseManager *******************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics
{
	struct PauseManagerBlueprintLibrary_eventGetPauseManager_Parms
	{
		const UObject* WorldContextObject;
		UPauseManagerSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPauseManager constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPauseManager constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPauseManager Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventGetPauseManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventGetPauseManager_Parms, ReturnValue), Z_Construct_UClass_UPauseManagerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PropPointers) < 2048);
// ********** End Function GetPauseManager Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "GetPauseManager", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PauseManagerBlueprintLibrary_eventGetPauseManager_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::PauseManagerBlueprintLibrary_eventGetPauseManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execGetPauseManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPauseManagerSubsystem**)Z_Param__Result=UPauseManagerBlueprintLibrary::GetPauseManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function GetPauseManager *********************

// ********** Begin Class UPauseManagerBlueprintLibrary Function GetPauseReasons *******************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics
{
	struct PauseManagerBlueprintLibrary_eventGetPauseReasons_Parms
	{
		const UObject* WorldContextObject;
		TSet<UPauseReason*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPauseReasons constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPauseReasons constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPauseReasons Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventGetPauseReasons_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventGetPauseReasons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PropPointers) < 2048);
// ********** End Function GetPauseReasons Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "GetPauseReasons", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PauseManagerBlueprintLibrary_eventGetPauseReasons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::PauseManagerBlueprintLibrary_eventGetPauseReasons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execGetPauseReasons)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UPauseReason*>*)Z_Param__Result=UPauseManagerBlueprintLibrary::GetPauseReasons(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function GetPauseReasons *********************

// ********** Begin Class UPauseManagerBlueprintLibrary Function HasPauseReasonWithTag *************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics
{
	struct PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag PauseTag;
		bool bIncludeChildTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
		{ "CPP_Default_bIncludeChildTags", "true" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasPauseReasonWithTag constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static void NewProp_bIncludeChildTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasPauseReasonWithTag constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasPauseReasonWithTag Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
void Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags_SetBit(void* Obj)
{
	((PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms*)Obj)->bIncludeChildTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags = { "bIncludeChildTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms), &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms), &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PropPointers) < 2048);
// ********** End Function HasPauseReasonWithTag Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "HasPauseReasonWithTag", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::PauseManagerBlueprintLibrary_eventHasPauseReasonWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execHasPauseReasonWithTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_UBOOL(Z_Param_bIncludeChildTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPauseManagerBlueprintLibrary::HasPauseReasonWithTag(Z_Param_WorldContextObject,Z_Param_PauseTag,Z_Param_bIncludeChildTags);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function HasPauseReasonWithTag ***************

// ********** Begin Class UPauseManagerBlueprintLibrary Function ReleasePause **********************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics
{
	struct PauseManagerBlueprintLibrary_eventReleasePause_Parms
	{
		const UObject* WorldContextObject;
		UPauseReason* PauseReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Releases a pause previously returned by Request Pause. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases a pause previously returned by Request Pause." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleasePause constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleasePause constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleasePause Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventReleasePause_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::NewProp_PauseReason = { "PauseReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventReleasePause_Parms, PauseReason), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::NewProp_PauseReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PropPointers) < 2048);
// ********** End Function ReleasePause Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "ReleasePause", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PauseManagerBlueprintLibrary_eventReleasePause_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::PauseManagerBlueprintLibrary_eventReleasePause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execReleasePause)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPauseReason,Z_Param_PauseReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPauseManagerBlueprintLibrary::ReleasePause(Z_Param_WorldContextObject,Z_Param_PauseReason);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function ReleasePause ************************

// ********** Begin Class UPauseManagerBlueprintLibrary Function ReleasePausesWithTag **************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics
{
	struct PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag PauseTag;
		bool bIncludeChildTags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Releases every active pause matching the tag, without needing the Pause Reason object. Returns how many were released. */" },
#endif
		{ "CPP_Default_bIncludeChildTags", "true" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases every active pause matching the tag, without needing the Pause Reason object. Returns how many were released." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleasePausesWithTag constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static void NewProp_bIncludeChildTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleasePausesWithTag constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleasePausesWithTag Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
void Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags_SetBit(void* Obj)
{
	((PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms*)Obj)->bIncludeChildTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags = { "bIncludeChildTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms), &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PropPointers) < 2048);
// ********** End Function ReleasePausesWithTag Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "ReleasePausesWithTag", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::PauseManagerBlueprintLibrary_eventReleasePausesWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execReleasePausesWithTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_UBOOL(Z_Param_bIncludeChildTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UPauseManagerBlueprintLibrary::ReleasePausesWithTag(Z_Param_WorldContextObject,Z_Param_PauseTag,Z_Param_bIncludeChildTags);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function ReleasePausesWithTag ****************

// ********** Begin Class UPauseManagerBlueprintLibrary Function RequestPause **********************
struct Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics
{
	struct PauseManagerBlueprintLibrary_eventRequestPause_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag PauseTag;
		UObject* Requester;
		UPauseReason* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Requester" },
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requests a pause. Hold onto the returned Pause Reason and pass it to Release Pause when done. */" },
#endif
		{ "DefaultToSelf", "Requester" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a pause. Hold onto the returned Pause Reason and pass it to Release Pause when done." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPause constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPause constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPause Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventRequestPause_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventRequestPause_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventRequestPause_Parms, Requester), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerBlueprintLibrary_eventRequestPause_Parms, ReturnValue), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PropPointers) < 2048);
// ********** End Function RequestPause Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerBlueprintLibrary, nullptr, "RequestPause", 	Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PauseManagerBlueprintLibrary_eventRequestPause_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::PauseManagerBlueprintLibrary_eventRequestPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerBlueprintLibrary::execRequestPause)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_OBJECT(UObject,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPauseReason**)Z_Param__Result=UPauseManagerBlueprintLibrary::RequestPause(Z_Param_WorldContextObject,Z_Param_PauseTag,Z_Param_Requester);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerBlueprintLibrary Function RequestPause ************************

// ********** Begin Class UPauseManagerBlueprintLibrary ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary;
UClass* UPauseManagerBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UPauseManagerBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PauseManagerBlueprintLibrary"),
			Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUPauseManagerBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UPauseManagerBlueprintLibrary_NoRegister()
{
	return UPauseManagerBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static helpers so any Blueprint can request/release pauses without fetching the subsystem first. */" },
#endif
		{ "IncludePath", "PauseManagerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/PauseManagerBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static helpers so any Blueprint can request/release pauses without fetching the subsystem first." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UPauseManagerBlueprintLibrary constinit property declarations ************
// ********** End Class UPauseManagerBlueprintLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPauseManager"), .Pointer = &UPauseManagerBlueprintLibrary::execGetPauseManager },
		{ .NameUTF8 = UTF8TEXT("GetPauseReasons"), .Pointer = &UPauseManagerBlueprintLibrary::execGetPauseReasons },
		{ .NameUTF8 = UTF8TEXT("HasPauseReasonWithTag"), .Pointer = &UPauseManagerBlueprintLibrary::execHasPauseReasonWithTag },
		{ .NameUTF8 = UTF8TEXT("ReleasePause"), .Pointer = &UPauseManagerBlueprintLibrary::execReleasePause },
		{ .NameUTF8 = UTF8TEXT("ReleasePausesWithTag"), .Pointer = &UPauseManagerBlueprintLibrary::execReleasePausesWithTag },
		{ .NameUTF8 = UTF8TEXT("RequestPause"), .Pointer = &UPauseManagerBlueprintLibrary::execRequestPause },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseManager, "GetPauseManager" }, // 439157122
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_GetPauseReasons, "GetPauseReasons" }, // 1242036778
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_HasPauseReasonWithTag, "HasPauseReasonWithTag" }, // 1838380778
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePause, "ReleasePause" }, // 2513010679
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_ReleasePausesWithTag, "ReleasePausesWithTag" }, // 1818862020
		{ &Z_Construct_UFunction_UPauseManagerBlueprintLibrary_RequestPause, "RequestPause" }, // 99265898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseManagerBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyPauseManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::ClassParams = {
	&UPauseManagerBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::Class_MetaDataParams)
};
void UPauseManagerBlueprintLibrary::StaticRegisterNativesUPauseManagerBlueprintLibrary()
{
	UClass* Class = UPauseManagerBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPauseManagerBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary.OuterSingleton;
}
UPauseManagerBlueprintLibrary::UPauseManagerBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPauseManagerBlueprintLibrary);
UPauseManagerBlueprintLibrary::~UPauseManagerBlueprintLibrary() {}
// ********** End Class UPauseManagerBlueprintLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h__Script_EasyPauseManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseManagerBlueprintLibrary, UPauseManagerBlueprintLibrary::StaticClass, TEXT("UPauseManagerBlueprintLibrary"), &Z_Registration_Info_UClass_UPauseManagerBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseManagerBlueprintLibrary), 776522764U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h__Script_EasyPauseManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h__Script_EasyPauseManager_2691313785{
	TEXT("/Script/EasyPauseManager"),
	Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h__Script_EasyPauseManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h__Script_EasyPauseManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
