// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"
#include "MyItemObject.h"
#include "Components/AudioComponent.h"
#include "FieldActor.generated.h"

struct PlantingState
{
	int32 State; //unLock:0 uncultivated:1
	float WeedsTime;
	float LastWeedingTime;
	int32 Worth;
	int32 CurrentLevel;
	bool Lock;
	bool HavePlant;
};

UCLASS()
class SUBFARM_API AFieldActor : public AActor, public IMyInterface
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
	TArray<FOutcomeStruct> OutcomeList;

	FTimerHandle TimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void IsLookAt() override;
	virtual void EndLookAt() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class USceneComponent* MyScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* FieldMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UStaticMeshComponent* PlantMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent")
	class UAudioComponent* MyAudio;

	UFUNCTION()
	int BuyField();

	//void PlantTomato();
	
	UFUNCTION()
	void Plant(int HashIndex);

	UFUNCTION()
	void Growth();


	UFUNCTION()
	TArray<FOutcomeStruct> Harvest();


	UFUNCTION()
	int32 GetState();

	UFUNCTION()
	bool CheckHasPlant();

	UFUNCTION()
	bool CheckCanHarvest();

	UFUNCTION()
	void Cultivate();

	UFUNCTION()
	void FinishCultivate();

	UFUNCTION()
	void FinishHarvest();

};
