// Fill out your copyright notice in the Description page of Project Settings.


#include "RightArmActor1.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ARightArmActor1::ARightArmActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/MOVEMENT/MODELS/RightArm.RightArm"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}

	


}

// Called when the game starts or when spawned
void ARightArmActor1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARightArmActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

