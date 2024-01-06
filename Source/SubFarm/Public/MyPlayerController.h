// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimComposite.h"
#include "GameFramework/PlayerController.h"
#include "MyBackpackWidget.h"
#include "MyUserWidget.h"
#include "MyPlayerController.generated.h"

/**d
 *
 */
UCLASS()

class SUBFARM_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	AActor* PreviousHitActor = nullptr;
	FTimerHandle TimerHandle;
public:
	virtual void SetupInputComponent();
	virtual void WheelUpFunction();
	virtual void WheelDownFunction();
	virtual void RotateLeft();
	virtual void RotateRight();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UMyBackpackWidget* MybackpackWidget;
	UMyUserWidget* MyUserWidget;
	int32 CurrentTool;

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void OnMouseClick();

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void AddBackpackWidgetToViewport();

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void RemoveBackpackWidgetToViewport();

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void MouseMovementTrack();

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void PutOnHand(int HashIndex);

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void UpdateHint(FText HintMessage);

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void StopAction();

};
