// Fill out your copyright notice in the Description page of Project Settings.


#include "LeftLegActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ALeftLegActor::ALeftLegActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/MOVEMENT/MODELS/LeftLeg.LeftLeg"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}



}

// Called when the game starts or when spawned
void ALeftLegActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALeftLegActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

