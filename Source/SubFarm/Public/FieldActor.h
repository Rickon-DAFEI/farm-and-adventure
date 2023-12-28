// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItemObject.h"
#include "FieldActor.generated.h"

struct PlantingState
{
	int32 State; //unLock:1 Dry:0 Normal:3
	float WeedsTime;
	float LastWeedingTime;
	int32 Worth;
	int32 CurrentLevel;
	bool Lock;
	bool HavePlant;
};

UCLASS()
class SUBFARM_API AFieldActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFieldActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	PlantingState CurrentState;
	TArray<FGrowthStepsStruct> PlantGrowthLevel;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class USceneComponent* MyScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* FieldMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* PlantMesh;

	UFUNCTION()
	void ClickFunction(FString CurrentTool);

	UFUNCTION()
	void BuyField();

	//void PlantTomato();
	
	UFUNCTION()
	void Plant(int HashIndex);

	UFUNCTION()
	void Growth();

	UFUNCTION()
	void Harvest();

	UFUNCTION()
	int32 GetState();

	UFUNCTION()
	bool CheckHasPlant();

	UFUNCTION()
	bool CheckCanHarvest();
};
