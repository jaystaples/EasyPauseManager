// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PauseManagerBlueprintLibrary.h"

#ifdef EASYPAUSEMANAGER_PauseManagerBlueprintLibrary_generated_h
#error "PauseManagerBlueprintLibrary.generated.h already included, missing '#pragma once' in PauseManagerBlueprintLibrary.h"
#endif
#define EASYPAUSEMANAGER_PauseManagerBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPauseManagerSubsystem;
class UPauseReason;
struct FGameplayTag;

// ********** Begin Class UPauseManagerBlueprintLibrary ********************************************
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasPauseReasonWithTag); \
	DECLARE_FUNCTION(execGetPauseReasons); \
	DECLARE_FUNCTION(execReleasePausesWithTag); \
	DECLARE_FUNCTION(execReleasePause); \
	DECLARE_FUNCTION(execRequestPause); \
	DECLARE_FUNCTION(execGetPauseManager);


struct Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics;
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseManagerBlueprintLibrary_NoRegister();

#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseManagerBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UPauseManagerBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYPAUSEMANAGER_API UClass* ::Z_Construct_UClass_UPauseManagerBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPauseManagerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyPauseManager"), Z_Construct_UClass_UPauseManagerBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPauseManagerBlueprintLibrary)


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseManagerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPauseManagerBlueprintLibrary(UPauseManagerBlueprintLibrary&&) = delete; \
	UPauseManagerBlueprintLibrary(const UPauseManagerBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseManagerBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseManagerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseManagerBlueprintLibrary) \
	NO_API virtual ~UPauseManagerBlueprintLibrary();


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_12_PROLOG
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPauseManagerBlueprintLibrary;

// ********** End Class UPauseManagerBlueprintLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseManagerBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
