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
#include "UObject/ConstructorHelpers.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

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
    bIsAiming = false;
    bIsArmAttached = true;  
    bIsArmLaunched = false;  

    DefaultFOV = 90.0f; 
    AimingFOV = 60.0f;  
    FOVInterpSpeed = 10.0f; 

   
    Camera->FieldOfView = DefaultFOV;

    static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/MOVEMENT/MODELS/dummymodel.dummymodel"));
    if (MeshAsset.Succeeded())
    {
        CharacterMesh->SetSkeletalMesh(MeshAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load skeletal mesh!"));
    }


}

void ANewCharacterController::BeginPlay()
{
    Super::BeginPlay();

  
    AttachBodyParts();
}

// Called every frame
void ANewCharacterController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    ManuallyMoveArm(DeltaTime);

    
    float TargetFOV = bIsAiming ? AimingFOV : DefaultFOV;
    float CurrentFOV = Camera->FieldOfView;
    Camera->SetFieldOfView(FMath::FInterpTo(CurrentFOV, TargetFOV, DeltaTime, FOVInterpSpeed));

   
    if (bIsArmAttached)
    {
        if (bIsAiming)
        {
            

            FVector Start = Camera->GetComponentLocation();
            FVector End = Start + (Camera->GetForwardVector() * 5000.0f);  

            FHitResult HitResult;
            FCollisionQueryParams TraceParams(FName(TEXT("AimTrace")), true, this);

            if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceParams))
            {
                AimDirection = (HitResult.ImpactPoint - GetActorLocation()).GetSafeNormal();
            }
            else
            {
                AimDirection = Camera->GetForwardVector();
            }
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
    PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ANewCharacterController::StartAiming);
    PlayerInputComponent->BindAction("Aim", IE_Released, this, &ANewCharacterController::StopAiming);
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ANewCharacterController::Shoot);
    PlayerInputComponent->BindAction("Deattach", IE_Pressed, this, &ANewCharacterController::DetachAllBodyParts);
    PlayerInputComponent->BindAction("Reattach", IE_Pressed, this, &ANewCharacterController::ReattachAllBodyParts);
    PlayerInputComponent->BindAction("UpgradeArm", IE_Pressed, this, &ANewCharacterController::UpgradeLeftArm);
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
        bIsArmAttached = true; 
        bIsArmLaunched = false;
    }
   
    else
    { 
        if (!bIsAiming)
        {
            if (LeftArmActor)
            {
               
                LeftArmActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
                LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(true);
                LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

                bIsArmAttached = false; 

            }

        }
       
    }

    
    bIsArmDismembered = !bIsArmDismembered;
}

void ANewCharacterController::StartRetractArm()
{
    if (!bIsArmDismembered || !LeftArmActor) return;

    if (LeftArmActor)
    {
     
        bIsArmLaunched = false;
    }

    bIsRetracting = true;
}

void ANewCharacterController::StartAiming()
{
   
    if (bIsArmAttached)
    {
        bIsAiming = true;
    }
   
    else if (!bIsArmAttached && bIsArmLaunched)
    {
        AttachBodyParts();
        bIsArmAttached = true; 
        bIsAiming = true; 
        bIsArmLaunched = false;
    }
}

void ANewCharacterController::StopAiming()
{
    if (bIsArmAttached)
    {
        bIsAiming = false;

       
        bIsArmLaunched = false; 
    }
    else if (!bIsArmAttached && bIsArmLaunched)
    {
        bIsAiming = false;
    }
    
}


void ANewCharacterController::Shoot()
{
    if (!bIsAiming || !LeftArmActor || bIsArmLaunched || !bIsArmAttached) return;


    FRotator NewArmRotation = AimDirection.Rotation();
    LeftArmActor->SetActorRotation(NewArmRotation);

    LeftArmActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(true);
    LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    
    float LaunchForce = 2000.0f;
    LeftArmActor->SkeletalMeshComponent->AddImpulse(AimDirection * LaunchForce, NAME_None, true);

    
    bIsArmLaunched = true;
    bIsArmDismembered = true;
    bIsArmAttached = false;

  
    GetWorldTimerManager().SetTimer(RetractTimerHandle, this, &ANewCharacterController::StartRetractArm, 3.0f, false);

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Arm Shot!"));
}
void ANewCharacterController::UpgradeLeftArm()
{
    if (LeftArmActor && LeftArmUpgradeMesh)
    {
        // Detach the current arm
        LeftArmActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

        // Create a new arm actor
        ALeftArmActor* NewLeftArmActor = GetWorld()->SpawnActor<ALeftArmActor>(ALeftArmActor::StaticClass());
        if (NewLeftArmActor)
        {
            // Set the skeletal mesh for the new arm
            NewLeftArmActor->SkeletalMeshComponent->SetSkeletalMesh(LeftArmUpgradeMesh); // Change this to SetSkeletalMesh

            NewLeftArmActor->AttachToComponent(CharacterMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("LeftArmSocket"));
            NewLeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(false);
            NewLeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

            // Clean up the old arm
            LeftArmActor->Destroy();
            LeftArmActor = NewLeftArmActor; // Update reference
        }
    }
}

void ANewCharacterController::SetupArmConstraints()
{
    if (LeftArmActor)
    {
        
        UPhysicsConstraintComponent* ArmConstraint = NewObject<UPhysicsConstraintComponent>(LeftArmActor);
        ArmConstraint->SetupAttachment(LeftArmActor->SkeletalMeshComponent); 
        ArmConstraint->RegisterComponent();  
        ArmConstraint->SetConstrainedComponents(LeftArmActor->SkeletalMeshComponent, NAME_None, CharacterMesh, FName("LeftArmSocket"));

        ArmConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, 45.0f);  
        ArmConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Limited, 45.0f);
        ArmConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Limited, 45.0f);

        ArmConstraint->SetLinearXLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);  
        ArmConstraint->SetLinearYLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
        ArmConstraint->SetLinearZLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
    }

    
    if (RightArmActor1)
    {
        RightArmConstraint = NewObject<UPhysicsConstraintComponent>(RightArmActor1);
        RightArmConstraint->SetupAttachment(RightArmActor1->SkeletalMeshComponent);
        RightArmConstraint->RegisterComponent();

        RightArmConstraint->SetConstrainedComponents(RightArmActor1->SkeletalMeshComponent, NAME_None, CharacterMesh, FName("RightArmSocket"));
        RightArmConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, 45.0f);
        RightArmConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Limited, 45.0f);
        RightArmConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Limited, 45.0f);

        RightArmConstraint->SetLinearXLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
        RightArmConstraint->SetLinearYLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
        RightArmConstraint->SetLinearZLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
    }
}

void ANewCharacterController::ManuallyMoveArm(float DeltaTime)
{
    if (LeftArmActor && bIsArmDismembered)
    {
        FVector TargetLocation = GetActorLocation() + AimDirection * 500.0f; 

       
        FVector ForceDirection = (TargetLocation - LeftArmActor->GetActorLocation()).GetSafeNormal();

        
        LeftArmActor->SkeletalMeshComponent->AddForce(ForceDirection * 1000.0f);  
    }
}





void ANewCharacterController::AttachBodyParts()
{
    FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, true);

    if (CharacterMesh)
    {
        
        if (!LeftArmActor)
        {
            LeftArmActor = GetWorld()->SpawnActor<ALeftArmActor>(ALeftArmActor::StaticClass());
        }
        if (LeftArmActor)
        {
            LeftArmActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("LeftArmSocket"));
            LeftArmActor->SetActorScale3D(FVector(0.1f));
            LeftArmActor->SetActorRelativeLocation(FVector(0, 0, -3));
            LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(false); 
            LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
          
           
            bIsArmAttached = true; 
        }
         SetupArmConstraints();

        if (!RightArmActor1)
        {
            RightArmActor1 = GetWorld()->SpawnActor<ARightArmActor1>(ARightArmActor1::StaticClass());
        }
        if (RightArmActor1)
        {
            RightArmActor1->AttachToComponent(CharacterMesh, AttachRules, TEXT("RightArmSocket"));
            RightArmActor1->SetActorScale3D(FVector(0.1f));
            RightArmActor1->SetActorRelativeLocation(FVector(0, 0, 0));
            RightArmActor1->SkeletalMeshComponent->SetSimulatePhysics(false);
            RightArmActor1->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }

        
        if (!HeadActor)
        {
            HeadActor = GetWorld()->SpawnActor<AHeadActor>(AHeadActor::StaticClass());
        }
        if (HeadActor)
        {
            HeadActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("HeadSocket"));
            HeadActor->SetActorScale3D(FVector(0.1f));
            HeadActor->SetActorRelativeLocation(FVector(0, 0, 0));
            HeadActor->SkeletalMeshComponent->SetSimulatePhysics(false);
            HeadActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }

        
        if (!LeftLegActor)
        {
            LeftLegActor = GetWorld()->SpawnActor<ALeftLegActor>(ALeftLegActor::StaticClass());
        }
        if (LeftLegActor)
        {
            LeftLegActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("LeftLegSocket"));
            LeftLegActor->SetActorScale3D(FVector(0.1f));
            LeftLegActor->SetActorRelativeLocation(FVector(0, 0, 0));
            LeftLegActor->SkeletalMeshComponent->SetSimulatePhysics(false);
            LeftLegActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }

        
        if (!RightLegActor)
        {
            RightLegActor = GetWorld()->SpawnActor<ARightLegActor>(ARightLegActor::StaticClass());
        }
        if (RightLegActor)
        {
            RightLegActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("RightLegSocket"));
            RightLegActor->SetActorScale3D(FVector(0.1f));
            RightLegActor->SetActorRelativeLocation(FVector(0, 0, 0));
            RightLegActor->SkeletalMeshComponent->SetSimulatePhysics(false); 
            RightLegActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }

        
        if (!TorsoActor)
        {
            TorsoActor = GetWorld()->SpawnActor<ATorsoActor>(ATorsoActor::StaticClass());
        }
        if (TorsoActor)
        {
            TorsoActor->AttachToComponent(CharacterMesh, AttachRules, TEXT("TorsoSocket"));
            TorsoActor->SetActorScale3D(FVector(0.1f));
            TorsoActor->SetActorRelativeLocation(FVector(0, 0, 0));
            TorsoActor->SkeletalMeshComponent->SetSimulatePhysics(false);
            TorsoActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
        SetupArmConstraints();
    }
}

void ANewCharacterController::DetachAllBodyParts()
{
   
    if (LeftArmActor)
    {
        LeftArmActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        LeftArmActor->SkeletalMeshComponent->SetSimulatePhysics(true);  
        LeftArmActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        
    }
    if (RightArmActor1)
    {
        RightArmActor1->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        RightArmActor1->SkeletalMeshComponent->SetSimulatePhysics(true);
        RightArmActor1->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
    if (HeadActor)
    {
        HeadActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        HeadActor->SkeletalMeshComponent->SetSimulatePhysics(true);
        HeadActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
    if (LeftLegActor)
    {
        LeftLegActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        LeftLegActor->SkeletalMeshComponent->SetSimulatePhysics(true);
        LeftLegActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
    if (RightLegActor)
    {
        RightLegActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        RightLegActor->SkeletalMeshComponent->SetSimulatePhysics(true);
        RightLegActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }
    if (TorsoActor)
    {
        TorsoActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        TorsoActor->SkeletalMeshComponent->SetSimulatePhysics(true);
        TorsoActor->SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    }

    bIsDetached = true;
    GetCharacterMovement()->DisableMovement(); 
}


void ANewCharacterController::ReattachAllBodyParts()
{
    AttachBodyParts();
    bIsDetached = false;
    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
}
