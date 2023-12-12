// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FiledActor.generated.h"

struct PlantingState
{
	int State;
	float WeedsTime;
	float LastWeedingTime;
	int Worth;
	int Lock;
	int CurrentLevel;
};

struct PlantingLevel {
	FString Name;
	FString MeshReference;
	float NeedGrowTime;
};
UCLASS()
class SUBFARM_API AFiledActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFiledActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	PlantingState CurrentState;
	TArray<PlantingLevel> PlantGrowthLevel;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class USceneComponent* MyScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* FiledMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* PlantMesh;

	UFUNCTION()
	void ClickFunction(FString CurrentTool);

	UFUNCTION()
	void BuyFiled();

	void PlantTomato();
	
	UFUNCTION()
	void Growth();

};
