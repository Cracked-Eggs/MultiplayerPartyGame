#include "NewCharacterController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "LeftArmActor.h"
#include "RightArmActor1.h"
#include "HeadActor.h"
#include "LeftLegActor.h"
#include "RightLegActor.h"
#include "TorsoActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"


// Sets default values
ANewCharacterController::ANewCharacterController()
{
    PrimaryActorTick.bCanEverTick = true;

    
    springArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
    springArm->SetupAttachment(RootComponent);
    springArm->bUsePawnControlRotation = true;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
    Camera->SetupAttachment(springArm);

    
    CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
    CharacterMesh->SetupAttachment(RootComponent);

    bIsArmDismembered = false;
}

void ANewCharacterController::BeginPlay()
{
    Super::BeginPlay();

    // Initialize body parts
    AttachBodyParts();
    ActivateRagdoll();
}

// Called every frame
void ANewCharacterController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    

    if (bIsRetracting && LeftArmActor)
    {
        FVector PlayerLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(LeftArmActor->GetActorLocation(), PlayerLocation, DeltaTime, RetractSpeed);
        LeftArmActor->SetActorLocation(NewLocation);

       
        if (FVector::Dist(NewLocation, PlayerLocation) < 10.0f)
        {
            AttachBodyParts(); 
            bIsRetracting = false; 
        }
    }
}



// Called to bind functionality to input
void ANewCharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAxis("MoveForward", this, &ANewCharacterController::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ANewCharacterController::MoveRight);
    PlayerInputComponent->BindAxis("TurnCamera", this, &ANewCharacterController::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &ANewCharacterController::LookUp);
    PlayerInputComponent->BindAction("ToggleArm", IE_Pressed, this, &ANewCharacterController::ToggleArm);
}

void ANewCharacterController::MoveForward(float inputValue)
{
    FVector ForwardDirection = GetActorForwardVector();
    AddMovementInput(ForwardDirection, inputValue);
}

void ANewCharacterController::MoveRight(float inputValue)
{
    FVector RightDirection = GetActorRightVector();
    AddMovementInput(RightDirection, inputValue);
}

void ANewCharacterController::Turn(float inputValue)
{
    AddControllerYawInput(inputValue);
}

void ANewCharacterController::LookUp(float inputValue)
{
    AddControllerPitchInput(inputValue);
}

void ANewCharacterController::ToggleArm()
{
    if (bIsArmDismembered)
    {
        
        AttachBodyParts();
        bIsRetracting = false;
    }
    else
    {
        // Detach the arm
        if (LeftArmActor)
        {
            LeftArmActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
            LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(true);
            LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        

            // Reset the retracting flag
            bIsRetracting = false;
        }
    }

    bIsArmDismembered = !bIsArmDismembered;
}

void ANewCharacterController::ActivateRagdoll()
{
    if (CharacterMesh) 
    {
        // Set simulate physics to true
        CharacterMesh->SetSimulatePhysics(true);

        
        CharacterMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
    }
}



void ANewCharacterController::AttachBodyParts()
{
    FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);

    if (CharacterMesh)
    {
        // Spawn and attach Left Arm Actor
        if (!LeftArmActor)
        {
            LeftArmActor = GetWorld()->SpawnActor<ALeftArmActor>(ALeftArmActor::StaticClass());
        }
        if (LeftArmActor)
        {
            LeftArmActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("LeftArmSocket"));
            LeftArmActor->SetActorScale3D(FVector(0.1f));
            LeftArmActor->SetActorRelativeLocation(FVector(0, 0, -3));
            LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(false); // Ensure physics is disabled when attaching
            LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            LeftArmActor->SetActorHiddenInGame(false); // Show the arm when attached
        }

        // Similarly for other body parts
        // Spawn and attach Right Arm Actor
        if (!RightArmActor1)
        {
            RightArmActor1 = GetWorld()->SpawnActor<ARightArmActor1>(ARightArmActor1::StaticClass());
        }
        if (RightArmActor1)
        {
            RightArmActor1->AttachToComponent(CharacterMesh, AttachRules, TEXT("RightArmSocket"));
            RightArmActor1->SetActorScale3D(FVector(0.1f));
            RightArmActor1->SetActorRelativeLocation(FVector(0, 0, 0));
        }

        // Spawn and attach Head Actor
        if (!HeadActor)
        {
            HeadActor = GetWorld()->SpawnActor<AHeadActor>(AHeadActor::StaticClass());
        }
        if (HeadActor)
        {
            HeadActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("HeadSocket"));
            HeadActor->SetActorScale3D(FVector(0.1f));
            HeadActor->SetActorRelativeLocation(FVector(0, 0, 0));
        }

        // Spawn and attach Left Leg Actor
        if (!LeftLegActor)
        {
            LeftLegActor = GetWorld()->SpawnActor<ALeftLegActor>(ALeftLegActor::StaticClass());
        }
        if (LeftLegActor)
        {
            LeftLegActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("LeftLegSocket"));
            LeftLegActor->SetActorScale3D(FVector(0.1f));
            LeftLegActor->SetActorRelativeLocation(FVector(0, 0, 0));
        }

        // Spawn and attach Right Leg Actor
        if (!RightLegActor)
        {
            RightLegActor = GetWorld()->SpawnActor<ARightLegActor>(ARightLegActor::StaticClass());
        }
        if (RightLegActor)
        {
            RightLegActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("RightLegSocket"));
            RightLegActor->SetActorScale3D(FVector(0.1f));
            RightLegActor->SetActorRelativeLocation(FVector(0, 0, 0));
        }

        // Spawn and attach Torso Actor
        if (!TorsoActor)
        {
            TorsoActor = GetWorld()->SpawnActor<ATorsoActor>(ATorsoActor::StaticClass());
        }
        if (TorsoActor)
        {
            TorsoActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("TorsoSocket"));
            TorsoActor->SetActorScale3D(FVector(0.1f));
            TorsoActor->SetActorRelativeLocation(FVector(0, 0, 0));
        }
    }
}
