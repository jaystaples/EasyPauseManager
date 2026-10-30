// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PauseReason.h"

#ifdef EASYPAUSEMANAGER_PauseReason_generated_h
#error "PauseReason.generated.h already included, missing '#pragma once' in PauseReason.h"
#endif
#define EASYPAUSEMANAGER_PauseReason_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPauseReason *************************************************************
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToDebugString); \
	DECLARE_FUNCTION(execIsRequesterDead);


struct Z_Construct_UClass_UPauseReason_Statics;
EASYPAUSEMANAGER_API UClass* Z_Construct_UClass_UPauseReason_NoRegister();

#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseReason(); \
	friend struct ::Z_Construct_UClass_UPauseReason_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYPAUSEMANAGER_API UClass* ::Z_Construct_UClass_UPauseReason_NoRegister(); \
public: \
	DECLARE_CLASS2(UPauseReason, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyPauseManager"), Z_Construct_UClass_UPauseReason_NoRegister) \
	DECLARE_SERIALIZER(UPauseReason)


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseReason(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPauseReason(UPauseReason&&) = delete; \
	UPauseReason(const UPauseReason&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseReason); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseReason); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseReason) \
	NO_API virtual ~UPauseReason();


#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_12_PROLOG
#define FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPauseReason;

// ********** End Class UPauseReason ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Plugins_EasyPauseManager_Source_EasyPauseManager_Public_PauseReason_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
