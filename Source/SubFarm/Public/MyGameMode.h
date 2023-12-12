// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameState.h"
#include "MyHUD.h"
#include "MyCharacter.h"
#include "MySpectatorPawn.h"
#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	AMyGameMode();
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReson) override;

	void PrintMyArray();
	void PrintMyMap();
	void PrintMySet();


	bool isGameOver;

	int32 varInt32;
	
	int64 varInt64;
	
	BYTE varByte;
	
	FString myString; // Can be modify
	
	FName myName; // light string name->hash quick-search

	FText myText; // Display LocalStroage

	FVector myVector;

	FRotator myRotator; // Roll(x), Pitch(y),Yaw(z)
	
	FTransform myTransform; // 向量、旋转、缩放 (FVector,FRotator,FScale)


	TArray<int32>MyArray;

	TMap<int32, FString>MyMap;

	TSet<FString>MySet;


};
