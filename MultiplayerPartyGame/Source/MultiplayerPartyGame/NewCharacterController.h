// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NewCharacterController.generated.h"

UCLASS()
class MULTIPLAYERPARTYGAME_API ANewCharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANewCharacterController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float inputValue);
	void MoveRight(float inputValue);
	void Turn(float inputValue);
	void LookUp(float inputValue);

	void ToggleArm();

	void ActivateRagdoll();

private:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* CharacterMesh;

	UPROPERTY()
	class ALeftArmActor* LeftArmActor;
	UPROPERTY()
	class ARightArmActor1* RightArmActor1;
	UPROPERTY()
	class ALeftLegActor* LeftLegActor;
	UPROPERTY()
	class ARightLegActor* RightLegActor;
	UPROPERTY()
	class AHeadActor* HeadActor;
	UPROPERTY()
	class ATorsoActor* TorsoActor;

	void AttachBodyParts();




	bool bIsArmDismembered;
	
	
	FVector DetachPosition;
	float RetractSpeed = 300.0f;
	bool bIsRetracting = false;
	

	

};
