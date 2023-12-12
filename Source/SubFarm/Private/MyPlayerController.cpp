// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "MyCharacter.h"
#include "FiledActor.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("WheelUp",IE_Pressed,this,&AMyPlayerController::WheelUpFunction);
	InputComponent->BindAction("WheelDown", IE_Pressed, this, &AMyPlayerController::WheelDownFunction);
	bShowMouseCursor = true; 
	bEnableClickEvents = true; 
	bEnableMouseOverEvents = true; 

	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	SetInputMode(InputMode);
	InputComponent->BindAction("MouseClick", IE_Pressed, this, &AMyPlayerController::OnMouseClick);

}

void AMyPlayerController::WheelUpFunction()
{
	if (GetPawn()) {
		AMyCharacter* MyCameraPawn = Cast<AMyCharacter>(GetPawn());
		if (MyCameraPawn) {
			MyCameraPawn->Zoom(1, 10);
		}
	}
}

void AMyPlayerController::WheelDownFunction()
{
	if (GetPawn()) {
		AMyCharacter* MyCameraPawn = Cast<AMyCharacter>(GetPawn());
		if (MyCameraPawn) {
			MyCameraPawn->Zoom(0, 10);
		}
	}
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UClass* widgetClass = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG_Widget.UMG_Widget_C'"));
	UUserWidget* MyWidgetClass = nullptr;
	MyWidgetClass = CreateWidget<UUserWidget>(GetWorld(),widgetClass);
	//MyWidgetClass->AddToViewport();
}

void AMyPlayerController::OnMouseClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Clicked"));
	FHitResult HitResult;
	if (GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, HitResult))
	{
		if (HitResult.GetActor() != nullptr)
		{	
			AActor* HitActor = HitResult.GetActor();
			FString HitActorName = *HitActor->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, HitActorName);
			if (HitActorName.StartsWith("BP_FiledActor")) {
				AFiledActor* CurrentFileActor = Cast<AFiledActor>(HitActor);
				CurrentFileActor->ClickFunction("empty");
			}

		}
	}
}
