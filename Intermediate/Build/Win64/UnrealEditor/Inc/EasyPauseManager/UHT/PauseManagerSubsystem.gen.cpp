// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PauseManagerSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePauseManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerSubsystem();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerSubsystem_NoRegister();
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseReason_NoRegister();
EASYPAUSEMANAGER_API UFunction* Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EasyPauseManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPauseStateChanged **************************************************
struct Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics
{
	struct _Script_EasyPauseManager_eventOnPauseStateChanged_Parms
	{
		bool bIsPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPauseStateChanged constinit property declarations ******************
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPauseStateChanged constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPauseStateChanged Property Definitions *****************************
void Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((_Script_EasyPauseManager_eventOnPauseStateChanged_Parms*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EasyPauseManager_eventOnPauseStateChanged_Parms), &Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::NewProp_bIsPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPauseStateChanged Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_EasyPauseManager, nullptr, "OnPauseStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::_Script_EasyPauseManager_eventOnPauseStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::_Script_EasyPauseManager_eventOnPauseStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPauseStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPauseStateChanged, bool bIsPaused)
{
	struct _Script_EasyPauseManager_eventOnPauseStateChanged_Parms
	{
		bool bIsPaused;
	};
	_Script_EasyPauseManager_eventOnPauseStateChanged_Parms Parms;
	Parms.bIsPaused=bIsPaused ? true : false;
	OnPauseStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPauseStateChanged ****************************************************

// ********** Begin Class UPauseManagerSubsystem Function CreatePauseReason ************************
struct Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics
{
	struct PauseManagerSubsystem_eventCreatePauseReason_Parms
	{
		FGameplayTag PauseTag;
		UObject* Requester;
		UPauseReason* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Requester" },
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a pause reason, adds it to the set and updates the pause state. Keep the returned object to release it later. */" },
#endif
		{ "CPP_Default_Requester", "None" },
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a pause reason, adds it to the set and updates the pause state. Keep the returned object to release it later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreatePauseReason constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreatePauseReason constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreatePauseReason Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventCreatePauseReason_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventCreatePauseReason_Parms, Requester), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventCreatePauseReason_Parms, ReturnValue), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PropPointers) < 2048);
// ********** End Function CreatePauseReason Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerSubsystem, nullptr, "CreatePauseReason", 	Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PauseManagerSubsystem_eventCreatePauseReason_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::PauseManagerSubsystem_eventCreatePauseReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerSubsystem::execCreatePauseReason)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_OBJECT(UObject,Z_Param_Requester);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPauseReason**)Z_Param__Result=P_THIS->CreatePauseReason(Z_Param_PauseTag,Z_Param_Requester);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerSubsystem Function CreatePauseReason **************************

// ********** Begin Class UPauseManagerSubsystem Function DeactivatePauseReason ********************
struct Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics
{
	struct PauseManagerSubsystem_eventDeactivatePauseReason_Parms
	{
		UPauseReason* PauseReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes the given pause reason and updates the pause state. Safe with null or already-removed reasons. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the given pause reason and updates the pause state. Safe with null or already-removed reasons." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DeactivatePauseReason constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeactivatePauseReason constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeactivatePauseReason Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::NewProp_PauseReason = { "PauseReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventDeactivatePauseReason_Parms, PauseReason), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::NewProp_PauseReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PropPointers) < 2048);
// ********** End Function DeactivatePauseReason Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerSubsystem, nullptr, "DeactivatePauseReason", 	Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PauseManagerSubsystem_eventDeactivatePauseReason_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::PauseManagerSubsystem_eventDeactivatePauseReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerSubsystem::execDeactivatePauseReason)
{
	P_GET_OBJECT(UPauseReason,Z_Param_PauseReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePauseReason(Z_Param_PauseReason);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerSubsystem Function DeactivatePauseReason **********************

// ********** Begin Class UPauseManagerSubsystem Function GetPauseReasons **************************
struct Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics
{
	struct PauseManagerSubsystem_eventGetPauseReasons_Parms
	{
		TSet<UPauseReason*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all currently active pause reasons. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all currently active pause reasons." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPauseReasons constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPauseReasons constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPauseReasons Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventGetPauseReasons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PropPointers) < 2048);
// ********** End Function GetPauseReasons Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerSubsystem, nullptr, "GetPauseReasons", 	Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PauseManagerSubsystem_eventGetPauseReasons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::PauseManagerSubsystem_eventGetPauseReasons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerSubsystem::execGetPauseReasons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UPauseReason*>*)Z_Param__Result=P_THIS->GetPauseReasons();
	P_NATIVE_END;
}
// ********** End Class UPauseManagerSubsystem Function GetPauseReasons ****************************

// ********** Begin Class UPauseManagerSubsystem Function HasPauseReasonWithTag ********************
struct Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics
{
	struct PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms
	{
		FGameplayTag PauseTag;
		bool bIncludeChildTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if any active reason matches the tag. */" },
#endif
		{ "CPP_Default_bIncludeChildTags", "true" },
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if any active reason matches the tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasPauseReasonWithTag constinit property declarations *****************
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
void Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags_SetBit(void* Obj)
{
	((PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms*)Obj)->bIncludeChildTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags = { "bIncludeChildTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms), &Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms), &Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_bIncludeChildTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PropPointers) < 2048);
// ********** End Function HasPauseReasonWithTag Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerSubsystem, nullptr, "HasPauseReasonWithTag", 	Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::PauseManagerSubsystem_eventHasPauseReasonWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerSubsystem::execHasPauseReasonWithTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_UBOOL(Z_Param_bIncludeChildTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPauseReasonWithTag(Z_Param_PauseTag,Z_Param_bIncludeChildTags);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerSubsystem Function HasPauseReasonWithTag **********************

// ********** Begin Class UPauseManagerSubsystem Function ReleasePausesWithTag *********************
struct Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics
{
	struct PauseManagerSubsystem_eventReleasePausesWithTag_Parms
	{
		FGameplayTag PauseTag;
		bool bIncludeChildTags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes every active reason matching the tag. Returns how many were removed. */" },
#endif
		{ "CPP_Default_bIncludeChildTags", "true" },
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes every active reason matching the tag. Returns how many were removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTag_MetaData[] = {
		{ "Categories", "EasyPauseManagerRoot" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleasePausesWithTag constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PauseTag;
	static void NewProp_bIncludeChildTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleasePausesWithTag constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleasePausesWithTag Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_PauseTag = { "PauseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventReleasePausesWithTag_Parms, PauseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTag_MetaData), NewProp_PauseTag_MetaData) }; // 517357616
void Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags_SetBit(void* Obj)
{
	((PauseManagerSubsystem_eventReleasePausesWithTag_Parms*)Obj)->bIncludeChildTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags = { "bIncludeChildTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PauseManagerSubsystem_eventReleasePausesWithTag_Parms), &Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PauseManagerSubsystem_eventReleasePausesWithTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_PauseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_bIncludeChildTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PropPointers) < 2048);
// ********** End Function ReleasePausesWithTag Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPauseManagerSubsystem, nullptr, "ReleasePausesWithTag", 	Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PauseManagerSubsystem_eventReleasePausesWithTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::PauseManagerSubsystem_eventReleasePausesWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseManagerSubsystem::execReleasePausesWithTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PauseTag);
	P_GET_UBOOL(Z_Param_bIncludeChildTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ReleasePausesWithTag(Z_Param_PauseTag,Z_Param_bIncludeChildTags);
	P_NATIVE_END;
}
// ********** End Class UPauseManagerSubsystem Function ReleasePausesWithTag ***********************

// ********** Begin Class UPauseManagerSubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPauseManagerSubsystem;
UClass* UPauseManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = UPauseManagerSubsystem;
	if (!Z_Registration_Info_UClass_UPauseManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PauseManagerSubsystem"),
			Z_Registration_Info_UClass_UPauseManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUPauseManagerSubsystem,
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
	return Z_Registration_Info_UClass_UPauseManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UPauseManagerSubsystem_NoRegister()
{
	return UPauseManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPauseManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Reference-counted pause manager.\n * Any object can create a Pause Reason. The game stays paused while at least one\n * reason is active, and unpauses only when all of them have been released.\n */" },
#endif
		{ "IncludePath", "PauseManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference-counted pause manager.\nAny object can create a Pause Reason. The game stays paused while at least one\nreason is active, and unpauses only when all of them have been released." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPauseStateChanged_MetaData[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires only when the paused state actually flips. */" },
#endif
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires only when the paused state actually flips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseReasons_MetaData[] = {
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusLostReason_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform-owned reasons (requester = this subsystem). */" },
#endif
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform-owned reasons (requester = this subsystem)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerDisconnectedReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/PauseManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPauseManagerSubsystem constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPauseStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseReasons_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PauseReasons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusLostReason;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerDisconnectedReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPauseManagerSubsystem constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreatePauseReason"), .Pointer = &UPauseManagerSubsystem::execCreatePauseReason },
		{ .NameUTF8 = UTF8TEXT("DeactivatePauseReason"), .Pointer = &UPauseManagerSubsystem::execDeactivatePauseReason },
		{ .NameUTF8 = UTF8TEXT("GetPauseReasons"), .Pointer = &UPauseManagerSubsystem::execGetPauseReasons },
		{ .NameUTF8 = UTF8TEXT("HasPauseReasonWithTag"), .Pointer = &UPauseManagerSubsystem::execHasPauseReasonWithTag },
		{ .NameUTF8 = UTF8TEXT("ReleasePausesWithTag"), .Pointer = &UPauseManagerSubsystem::execReleasePausesWithTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseManagerSubsystem_CreatePauseReason, "CreatePauseReason" }, // 330885948
		{ &Z_Construct_UFunction_UPauseManagerSubsystem_DeactivatePauseReason, "DeactivatePauseReason" }, // 4169758999
		{ &Z_Construct_UFunction_UPauseManagerSubsystem_GetPauseReasons, "GetPauseReasons" }, // 2802079959
		{ &Z_Construct_UFunction_UPauseManagerSubsystem_HasPauseReasonWithTag, "HasPauseReasonWithTag" }, // 2376579289
		{ &Z_Construct_UFunction_UPauseManagerSubsystem_ReleasePausesWithTag, "ReleasePausesWithTag" }, // 604253845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPauseManagerSubsystem_Statics

// ********** Begin Class UPauseManagerSubsystem Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_OnPauseStateChanged = { "OnPauseStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseManagerSubsystem, OnPauseStateChanged), Z_Construct_UDelegateFunction_EasyPauseManager_OnPauseStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPauseStateChanged_MetaData), NewProp_OnPauseStateChanged_MetaData) }; // 1262070430
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_PauseReasons_ElementProp = { "PauseReasons", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_PauseReasons = { "PauseReasons", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseManagerSubsystem, PauseReasons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseReasons_MetaData), NewProp_PauseReasons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_FocusLostReason = { "FocusLostReason", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseManagerSubsystem, FocusLostReason), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusLostReason_MetaData), NewProp_FocusLostReason_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_ControllerDisconnectedReason = { "ControllerDisconnectedReason", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseManagerSubsystem, ControllerDisconnectedReason), Z_Construct_UClass_UPauseReason_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerDisconnectedReason_MetaData), NewProp_ControllerDisconnectedReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_OnPauseStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_PauseReasons_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_PauseReasons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_FocusLostReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseManagerSubsystem_Statics::NewProp_ControllerDisconnectedReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UPauseManagerSubsystem Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPauseManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyPauseManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseManagerSubsystem_Statics::ClassParams = {
	&UPauseManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseManagerSubsystem_Statics::Class_MetaDataParams)
};
void UPauseManagerSubsystem::StaticRegisterNativesUPauseManagerSubsystem()
{
	UClass* Class = UPauseManagerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPauseManagerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPauseManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UPauseManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseManagerSubsystem.OuterSingleton, Z_Construct_UClass_UPauseManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseManagerSubsystem.OuterSingleton;
}
UPauseManagerSubsystem::UPauseManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPauseManagerSubsystem);
UPauseManagerSubsystem::~UPauseManagerSubsystem() {}
// ********** End Class UPauseManagerSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h__Script_EasyPauseManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseManagerSubsystem, UPauseManagerSubsystem::StaticClass, TEXT("UPauseManagerSubsystem"), &Z_Registration_Info_UClass_UPauseManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseManagerSubsystem), 3876859072U) },
	};
}; // Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h__Script_EasyPauseManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h__Script_EasyPauseManager_3083107826{
	TEXT("/Script/EasyPauseManager"),
	Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h__Script_EasyPauseManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h__Script_EasyPauseManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
