// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "MyCharacter.h"
#include "FieldActor.h"

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
	UClass* widgetClass = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyUserWidget.BP_MyUserWidget_C'"));
	/// Script / UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget'
	//UClass* widgetClass = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget_C''"));
	UUserWidget* MyWidgetClass = nullptr;
	MyWidgetClass = CreateWidget<UUserWidget>(GetWorld(),widgetClass);
	MyWidgetClass->AddToViewport();

	CurrentState = 0;
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
			if (HitActorName.StartsWith("BP_FieldActor")) {
				AFieldActor* CurrentFieldActor = Cast<AFieldActor>(HitActor);
				if (CurrentState == 0) {
					CurrentFieldActor->BuyField();
					CurrentState++;
				}
				else if (CurrentState == 1) {
					CurrentFieldActor->ClickFunction("PlantTomato");
					CurrentFieldActor->PlantTomato();
					CurrentState++;
				}
				else {
					CurrentFieldActor->ClickFunction("Harvest");
					CurrentFieldActor->Harvest();
					CurrentState++;
					if (GetPawn()) {
						AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetPawn());
						ItemNumber newItem;
						newItem.HashIndex = 2002;
						newItem.Number = 2;
						TArray<ItemNumber> AddList;
						AddList.Add(newItem);
						if (MyCharacter) {
							MyCharacter->AddBackpackItems(AddList);
						}
					}
				}
			}

		}
	}
}

void AMyPlayerController::AddBackpackWidgetToViewport()
{
	UClass* MybackpackWidgetClass = LoadClass<UMyBackpackWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget_C'"));
	MybackpackWidget = CreateWidget<UMyBackpackWidget>(GetWorld(), MybackpackWidgetClass);
	MybackpackWidget->AddToViewport();
}

void AMyPlayerController::RemoveBackpackWidgetToViewport()
{
	if (MybackpackWidget && MybackpackWidget->IsInViewport())
	{
		MybackpackWidget->RemoveFromViewport();
	}
}
