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
				if (CurrentFieldActor->GetState()==1) {
					// unlock
					CurrentFieldActor->BuyField();
				}
				else if (!CurrentFieldActor->CheckHasPlant()) {
					// get hand plant
					CurrentFieldActor->ClickFunction("PlantTomato");
					CurrentFieldActor->Plant(2001);
				}
				else if(CurrentFieldActor->CheckHasPlant()){
					if (!CurrentFieldActor->CheckCanHarvest()) {
						CurrentFieldActor->Growth();
					}
					else {
						CurrentFieldActor->ClickFunction("Harvest");
						TArray<FOutcomeStruct> OutcomeList = CurrentFieldActor->Harvest();

						if (GetPawn()) {
							AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetPawn());
							if (MyCharacter) {
								MyCharacter->AddBackpackItems(OutcomeList);
							}
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
