// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PauseManagerSubsystem.h"

#ifdef EASYPAUSEMANAGER_PauseManagerSubsystem_generated_h
#error "PauseManagerSubsystem.generated.h already included, missing '#pragma once' in PauseManagerSubsystem.h"
#endif
#define EASYPAUSEMANAGER_PauseManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPauseReason;
struct FGameplayTag;

// ********** Begin Delegate FOnPauseStateChanged **************************************************
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_13_DELEGATE \
EASYPAUSEMANAGER_API void FOnPauseStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPauseStateChanged, bool bIsPaused);


// ********** End Delegate FOnPauseStateChanged ****************************************************

// ********** Begin Class UPauseManagerSubsystem ***************************************************
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasPauseReasonWithTag); \
	DECLARE_FUNCTION(execGetPauseReasons); \
	DECLARE_FUNCTION(execReleasePausesWithTag); \
	DECLARE_FUNCTION(execDeactivatePauseReason); \
	DECLARE_FUNCTION(execCreatePauseReason);


struct Z_Construct_UClass_UPauseManagerSubsystem_Statics;
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerSubsystem_NoRegister();

#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseManagerSubsystem(); \
	friend struct ::Z_Construct_UClass_UPauseManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYPAUSEMANAGER_API UClass* ::Z_Construct_UClass_UPauseManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPauseManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyPauseManager"), Z_Construct_UClass_UPauseManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPauseManagerSubsystem)


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseManagerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPauseManagerSubsystem(UPauseManagerSubsystem&&) = delete; \
	UPauseManagerSubsystem(const UPauseManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPauseManagerSubsystem) \
	NO_API virtual ~UPauseManagerSubsystem();


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_20_PROLOG
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPauseManagerSubsystem;

// ********** End Class UPauseManagerSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
