// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPartyGame/HeadActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_AHeadActor();
MULTIPLAYERPARTYGAME_API UClass* Z_Construct_UClass_AHeadActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerPartyGame();
// End Cross Module References

// Begin Class AHeadActor
void AHeadActor::StaticRegisterNativesAHeadActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeadActor);
UClass* Z_Construct_UClass_AHeadActor_NoRegister()
{
	return AHeadActor::StaticClass();
}
struct Z_Construct_UClass_AHeadActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HeadActor.h" },
		{ "ModuleRelativePath", "HeadActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HeadActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeadActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeadActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeadActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeadActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeadActor_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeadActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPartyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeadActor_Statics::ClassParams = {
	&AHeadActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeadActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeadActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeadActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeadActor()
{
	if (!Z_Registration_Info_UClass_AHeadActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeadActor.OuterSingleton, Z_Construct_UClass_AHeadActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeadActor.OuterSingleton;
}
template<> MULTIPLAYERPARTYGAME_API UClass* StaticClass<AHeadActor>()
{
	return AHeadActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadActor);
AHeadActor::~AHeadActor() {}
// End Class AHeadActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_HeadActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeadActor, AHeadActor::StaticClass, TEXT("AHeadActor"), &Z_Registration_Info_UClass_AHeadActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeadActor), 1490148716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_HeadActor_h_2964002974(TEXT("/Script/MultiplayerPartyGame"),
	Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_HeadActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MultiplayerPartyGame_MultiplayerPartyGame_Source_MultiplayerPartyGame_HeadActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
