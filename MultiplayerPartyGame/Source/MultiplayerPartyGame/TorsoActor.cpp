// Fill out your copyright notice in the Description page of Project Settings.


#include "TorsoActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ATorsoActor::ATorsoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/MOVEMENT/MODELS/torso.torso"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}

}

// Called when the game starts or when spawned
void ATorsoActor::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("TorsoActor has been initialized"));
	Super::BeginPlay();
	
}

// Called every frame
void ATorsoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

