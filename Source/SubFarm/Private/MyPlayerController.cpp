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
	InputComponent->BindAxis("MouseX", this, &AMyPlayerController::OnMouseMoveX);
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

void AMyPlayerController::OnMouseMoveX(float AxisValue)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Moving MouseX"));
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

void AMyPlayerController::MouseMovementTrack() {
	float MouseX, MouseY;
	if (GetMousePosition(MouseX, MouseY))
	{
		FVector WorldLocation;
		FVector WorldDirection;

		if (DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
		{
			FVector StartLocation = WorldLocation;

			FVector EndLocation = StartLocation + WorldDirection * 10000;

			FHitResult HitResult;
			bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility);
			if (bHit)
			{
				AActor* HitActor = HitResult.GetActor();
				if (HitActor != PreviousHitActor)
				{
					if (PreviousHitActor)
					{
						IMyInterface* Interface = Cast<IMyInterface>(PreviousHitActor);
						if (Interface)
						{
							Interface->EndLookAt();

						}
					}

					PreviousHitActor = HitActor;

					IMyInterface* Interface = Cast<IMyInterface>(HitActor);
					if (Interface)
					{
						FVector PlayerLocation = GetPawn()->GetActorLocation();

						float Distance = FVector::Dist(PlayerLocation, HitActor->GetActorLocation());

						float TriggerDistance = 300.0f; // 例如，500个单位
						if (Distance < TriggerDistance) {
							Interface->IsLookAt();
						}
					}
				}
			}
		}
	}
}

void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MouseMovementTrack();
}

void AMyPlayerController::OnMouseClick()
{
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
					CurrentFieldActor->Plant(2001);
				}
				else if(CurrentFieldActor->CheckHasPlant()){
					if (CurrentFieldActor->CheckCanHarvest()) {
						TArray<FOutcomeStruct> OutcomeList = CurrentFieldActor->Harvest();
						if (GetPawn()) {
							AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetPawn());
							if (MyCharacter) {
								MyCharacter->AddBackpackItems(&OutcomeList);
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
