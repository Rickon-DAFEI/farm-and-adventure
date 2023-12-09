// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance();

	UPROPERTY(EditAnyWhere,BlueprintReadWrite,CateGory = "MyInstance")
	FString MyAppID;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, CateGory = "MyInstance")
	FString MyUserID;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, CateGory = "MyInstance")
	FString MyName;
};
