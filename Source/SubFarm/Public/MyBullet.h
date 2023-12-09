// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "MyBullet.generated.h"

UCLASS()
class SUBFARM_API AMyBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="MyComponent")
	UStaticMeshComponent* MyBullet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyComponent")
	USphereComponent* MySphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyComponent")
	UProjectileMovementComponent * MyProjectile;
};
