// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SUBFARM_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetupInputComponent();
	virtual void WheelUpFunction();
	virtual void WheelDownFunction();

	virtual void BeginPlay() override;
	void OnMouseClick();
};
