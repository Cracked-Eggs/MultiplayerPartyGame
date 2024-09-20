// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/MultiplayerSessionsSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class UMultiplayerSessionsSubsystem Function CreateServer
struct Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics
{
	struct MultiplayerSessionsSubsystem_eventCreateServer_Parms
	{
		FString ServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerSessionsSubsystem_eventCreateServer_Parms, ServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::NewProp_ServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionsSubsystem, nullptr, "CreateServer", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::MultiplayerSessionsSubsystem_eventCreateServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::MultiplayerSessionsSubsystem_eventCreateServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerSessionsSubsystem::execCreateServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateServer(Z_Param_ServerName);
	P_NATIVE_END;
}
// End Class UMultiplayerSessionsSubsystem Function CreateServer

// Begin Class UMultiplayerSessionsSubsystem Function FindServer
struct Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics
{
	struct MultiplayerSessionsSubsystem_eventFindServer_Parms
	{
		FString ServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerSessionsSubsystem_eventFindServer_Parms, ServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::NewProp_ServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerSessionsSubsystem, nullptr, "FindServer", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::MultiplayerSessionsSubsystem_eventFindServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::MultiplayerSessionsSubsystem_eventFindServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerSessionsSubsystem::execFindServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindServer(Z_Param_ServerName);
	P_NATIVE_END;
}
// End Class UMultiplayerSessionsSubsystem Function FindServer

// Begin Class UMultiplayerSessionsSubsystem
void UMultiplayerSessionsSubsystem::StaticRegisterNativesUMultiplayerSessionsSubsystem()
{
	UClass* Class = UMultiplayerSessionsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateServer", &UMultiplayerSessionsSubsystem::execCreateServer },
		{ "FindServer", &UMultiplayerSessionsSubsystem::execFindServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerSessionsSubsystem);
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister()
{
	return UMultiplayerSessionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultiplayerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayerSessionsSubsystem_CreateServer, "CreateServer" }, // 2414569000
		{ &Z_Construct_UFunction_UMultiplayerSessionsSubsystem_FindServer, "FindServer" }, // 1015669607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams = {
	&UMultiplayerSessionsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<UMultiplayerSessionsSubsystem>()
{
	return UMultiplayerSessionsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionsSubsystem);
UMultiplayerSessionsSubsystem::~UMultiplayerSessionsSubsystem() {}
// End Class UMultiplayerSessionsSubsystem

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics
>>>>>>> FactoryMapUpdate
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionsSubsystem, UMultiplayerSessionsSubsystem::StaticClass, TEXT("UMultiplayerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionsSubsystem), 318135090U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_480700290(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_480700290(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_MultiplayerSessionsSubsystem_h_Statics::ClassInfo),
>>>>>>> FactoryMapUpdate
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
