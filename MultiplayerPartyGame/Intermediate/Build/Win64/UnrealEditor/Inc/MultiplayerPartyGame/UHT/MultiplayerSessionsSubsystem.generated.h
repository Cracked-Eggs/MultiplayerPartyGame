// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPARTYGAME_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define MULTIPLAYERPARTYGAME_MultiplayerSessionsSubsystem_generated_h

#define FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindServer); \
	DECLARE_FUNCTION(execCreateServer);


#define FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerPartyGame"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	NO_API virtual ~UMultiplayerSessionsSubsystem();


#define FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_14_PROLOG
#define FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<class UMultiplayerSessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
