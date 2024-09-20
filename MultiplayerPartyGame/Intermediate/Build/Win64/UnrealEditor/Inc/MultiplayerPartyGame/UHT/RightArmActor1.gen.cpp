// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/RightArmActor1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRightArmActor1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ARightArmActor1();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_ARightArmActor1_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class ARightArmActor1
void ARightArmActor1::StaticRegisterNativesARightArmActor1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARightArmActor1);
UClass* Z_Construct_UClass_ARightArmActor1_NoRegister()
{
	return ARightArmActor1::StaticClass();
}
struct Z_Construct_UClass_ARightArmActor1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RightArmActor1.h" },
		{ "ModuleRelativePath", "RightArmActor1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RightArmActor1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARightArmActor1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARightArmActor1_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARightArmActor1, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARightArmActor1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightArmActor1_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARightArmActor1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARightArmActor1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARightArmActor1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARightArmActor1_Statics::ClassParams = {
	&ARightArmActor1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARightArmActor1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARightArmActor1_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARightArmActor1_Statics::Class_MetaDataParams), Z_Construct_UClass_ARightArmActor1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARightArmActor1()
{
	if (!Z_Registration_Info_UClass_ARightArmActor1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARightArmActor1.OuterSingleton, Z_Construct_UClass_ARightArmActor1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARightArmActor1.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<ARightArmActor1>()
{
	return ARightArmActor1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARightArmActor1);
ARightArmActor1::~ARightArmActor1() {}
// End Class ARightArmActor1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_RightArmActor1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARightArmActor1, ARightArmActor1::StaticClass, TEXT("ARightArmActor1"), &Z_Registration_Info_UClass_ARightArmActor1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARightArmActor1), 2039000236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_RightArmActor1_h_1961201766(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_RightArmActor1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_RightArmActor1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
