// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/NewCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewCharacterController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_AHeadActor_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftArmActor_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ALeftLegActor_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ANewCharacterController();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ANewCharacterController_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ARightArmActor1_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ARightLegActor_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ATorsoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class ANewCharacterController Function UpgradeLeftArm
struct Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewCharacterController, nullptr, "UpgradeLeftArm", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANewCharacterController::execUpgradeLeftArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeLeftArm();
	P_NATIVE_END;
}
// End Class ANewCharacterController Function UpgradeLeftArm

// Begin Class ANewCharacterController
void ANewCharacterController::StaticRegisterNativesANewCharacterController()
{
	UClass* Class = ANewCharacterController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpgradeLeftArm", &ANewCharacterController::execUpgradeLeftArm },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewCharacterController);
UClass* Z_Construct_UClass_ANewCharacterController_NoRegister()
{
	return ANewCharacterController::StaticClass();
}
struct Z_Construct_UClass_ANewCharacterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewCharacterController.h" },
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmUpgradeMesh_MetaData[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmActor_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightArmActor1_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLegActor_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLegActor_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadActor_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorsoActor_MetaData[] = {
		{ "ModuleRelativePath", "NewCharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftArmUpgradeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_springArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftArmActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightArmActor1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLegActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLegActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewCharacterController_UpgradeLeftArm, "UpgradeLeftArm" }, // 3833422712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewCharacterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, CharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMesh_MetaData), NewProp_CharacterMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftArmUpgradeMesh = { "LeftArmUpgradeMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, LeftArmUpgradeMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftArmUpgradeMesh_MetaData), NewProp_LeftArmUpgradeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_springArm_MetaData), NewProp_springArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftArmActor = { "LeftArmActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, LeftArmActor), Z_Construct_UClass_ALeftArmActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftArmActor_MetaData), NewProp_LeftArmActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_RightArmActor1 = { "RightArmActor1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, RightArmActor1), Z_Construct_UClass_ARightArmActor1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightArmActor1_MetaData), NewProp_RightArmActor1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftLegActor = { "LeftLegActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, LeftLegActor), Z_Construct_UClass_ALeftLegActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLegActor_MetaData), NewProp_LeftLegActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_RightLegActor = { "RightLegActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, RightLegActor), Z_Construct_UClass_ARightLegActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLegActor_MetaData), NewProp_RightLegActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_HeadActor = { "HeadActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, HeadActor), Z_Construct_UClass_AHeadActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadActor_MetaData), NewProp_HeadActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewCharacterController_Statics::NewProp_TorsoActor = { "TorsoActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewCharacterController, TorsoActor), Z_Construct_UClass_ATorsoActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorsoActor_MetaData), NewProp_TorsoActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewCharacterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_CharacterMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftArmUpgradeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_springArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftArmActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_RightArmActor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_LeftLegActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_RightLegActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_HeadActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewCharacterController_Statics::NewProp_TorsoActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewCharacterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANewCharacterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewCharacterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewCharacterController_Statics::ClassParams = {
	&ANewCharacterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANewCharacterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANewCharacterController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewCharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewCharacterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewCharacterController()
{
	if (!Z_Registration_Info_UClass_ANewCharacterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewCharacterController.OuterSingleton, Z_Construct_UClass_ANewCharacterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewCharacterController.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<ANewCharacterController>()
{
	return ANewCharacterController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewCharacterController);
ANewCharacterController::~ANewCharacterController() {}
// End Class ANewCharacterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewCharacterController, ANewCharacterController::StaticClass, TEXT("ANewCharacterController"), &Z_Registration_Info_UClass_ANewCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewCharacterController), 2592321602U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_3951861304(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shezw_OneDrive_Documents_GitHub_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_2408602929(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_NewCharacterController_h_Statics::ClassInfo),
>>>>>>> FactoryMapUpdate
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
