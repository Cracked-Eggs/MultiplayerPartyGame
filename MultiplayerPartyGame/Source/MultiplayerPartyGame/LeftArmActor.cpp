// Fill out your copyright notice in the Description page of Project Settings.


#include "LeftArmActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ALeftArmActor::ALeftArmActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/MOVEMENT/MODELS/LeftArm.LeftArm"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}



}

// Called when the game starts or when spawned
void ALeftArmActor::BeginPlay()
{
	Super::BeginPlay();
	if (SkeletalMeshComponent)
	{
		SkeletalMeshComponent->SetSimulatePhysics(false); // Enable physics
	}
	
}

// Called every frame
void ALeftArmActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

