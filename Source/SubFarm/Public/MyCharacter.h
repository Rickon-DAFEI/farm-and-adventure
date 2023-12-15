// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "MyHealthWidget.h"
#include "Components/WidgetComponent.h"
#include "TimerManager.h"
#include "MyBackpack.h"
#include "MyInterface.h"
#include "MyCharacter.generated.h"

UCLASS()
class SUBFARM_API AMyCharacter : public ACharacter,public IMyInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	MyBackpack PlayerBackpack;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "MySceneComponent")
	USpringArmComponent* MySpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	UCameraComponent* MyCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* LookAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	FVector StartLocation;
	FVector ForwardVector;
	FVector EndLocation;
	FHitResult HitResult;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	UWidgetComponent* MyWidgetHealth;

	virtual void Attack() override;
	virtual void CaclulateHealth() override;

	FTimerHandle Time;
	void PrintTime();

	void Zoom(bool Dirction, float ZoomSpeed);

	float CameraHeight;

	void AddBackpackItems(TArray<BackPackItem> AddList);
};
