// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "MyCharacter.h"
#include "FieldActor.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("WheelUp",IE_Pressed,this,&AMyPlayerController::WheelUpFunction);
	InputComponent->BindAction("WheelDown", IE_Pressed, this, &AMyPlayerController::WheelDownFunction);
	InputComponent->BindAction("RotateLeft", IE_Pressed, this, &AMyPlayerController::RotateLeft);
	InputComponent->BindAction("RotateRight", IE_Pressed, this, &AMyPlayerController::RotateRight);
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


void AMyPlayerController::RotateLeft()
{
	if (GetPawn()) {
		AMyCharacter* MyCameraPawn = Cast<AMyCharacter>(GetPawn());
		if (MyCameraPawn) {
			MyCameraPawn->Zoom(1, 10);
		}
	}
}

void AMyPlayerController::RotateRight()
{
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UClass* widgetClass = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyUserWidget.BP_MyUserWidget_C'"));
	/// Script / UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget'
	//UClass* widgetClass = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget_C''"));
	MyUserWidget = CreateWidget<UMyUserWidget>(GetWorld(),widgetClass);
	MyUserWidget->AddToViewport();
	FText MyText = FText::FromString(TEXT("Initial props have been obtained \n please open the backpack to view"));
	UpdateHint(MyText);
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

				}
				IMyInterface* Interface = Cast<IMyInterface>(HitActor);
				if (Interface)
				{
					FVector PlayerLocation = GetPawn()->GetActorLocation();

					float Distance = FVector::Dist(PlayerLocation, HitActor->GetActorLocation());

					float TriggerDistance = 350.0f; // 例如，500个单位
					if (Distance < TriggerDistance) {
						Interface->IsLookAt();

					}
				}
			}
		}
	}
}

void AMyPlayerController::UpdateHint(FText HintMessage)
{
	MyUserWidget->UpdateHint(HintMessage);
}

void AMyPlayerController::StopAction()
{
	if (GetPawn()) {
		AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetPawn());
		MyCharacter->IsDigging = false;
		MyCharacter->IsHarvesting = false;
		MyCharacter->IsPlanting = false;
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
	AMyCharacter* MyCharacter = nullptr;
	if (GetPawn()) {
		MyCharacter = Cast<AMyCharacter>(GetPawn());
		if (MyCharacter->IsDoingAction()) {
			return;
		}
	}
	if (GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, HitResult))
	{
		if (HitResult.GetActor() != nullptr)
		{	
			FVector PlayerLocation = GetPawn()->GetActorLocation();

			AActor* HitActor = HitResult.GetActor();
			float Distance = FVector::Dist(PlayerLocation, HitActor->GetActorLocation());

			float TriggerDistance = 300.0f; // 例如，500个单位
			if (Distance > TriggerDistance) {
				return ;
			}
			FString HitActorName = *HitActor->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, HitActorName);
			if (HitActorName.StartsWith("BP_FieldActor")) {
				AFieldActor* CurrentFieldActor = Cast<AFieldActor>(HitActor);
				if (CurrentFieldActor->GetState()==0) {
					// unlock
					int NeedMoney = CurrentFieldActor->BuyField();
					MyUserWidget->AlterMoney(-NeedMoney);
					
					FText MyText = FText::FromString(TEXT("Purchased a land \n - 100 gold coins"));
					MyUserWidget->UpdateHint(MyText);
				}
				else if (CurrentFieldActor->GetState() == 1) {
					// uncultivated
					if (CurrentTool==2005) {
						// with dig tool
						if (MyCharacter) {
							MyCharacter->IsDigging = true;
						
							FString AssetPath = TEXT("/Script/Engine.AnimComposite'/Game/Digging.Digging'");

							FStringAssetReference AssetRef(AssetPath);

							UAnimComposite* AnimComposite = Cast<UAnimComposite>(AssetRef.TryLoad());

							if (AnimComposite) {
								float AnimDuration = AnimComposite->GetPlayLength();
								GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMyPlayerController::StopAction, AnimDuration, false);
							}
							CurrentFieldActor->Cultivate();
						}
					}
					else {
						FText MyText = FText::FromString(TEXT("You need to equip with a sholve!"));
						MyUserWidget->UpdateHint(MyText);
					}
				}
				else if (!CurrentFieldActor->CheckHasPlant()) {
					// get hand plant
					CurrentFieldActor->Plant(CurrentTool);
				}
				else if(CurrentFieldActor->CheckHasPlant()){
					if (CurrentFieldActor->CheckCanHarvest()) {
						TArray<FOutcomeStruct> OutcomeList = CurrentFieldActor->Harvest();
						if (MyCharacter) {
							MyCharacter->IsHarvesting = true;
							FString AssetPath = TEXT("/Script/Engine.AnimComposite'/Game/Harvesting.Harvesting'");

							FStringAssetReference AssetRef(AssetPath);

							UAnimComposite* AnimComposite = Cast<UAnimComposite>(AssetRef.TryLoad());
							CurrentFieldActor->Harvest();
							if (AnimComposite) {
								float AnimDuration = AnimComposite->GetPlayLength();
								GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMyPlayerController::StopAction, AnimDuration, false);
							}
							MyCharacter->AddBackpackItems(&OutcomeList);
							
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

void AMyPlayerController::PutOnHand(int HashIndex) {
	RemoveBackpackWidgetToViewport();
	if (GetPawn()) {
		AMyCharacter* MyCharacter = Cast<AMyCharacter>(GetPawn());
		if (MyCharacter) {
			MyCharacter->PutOnHand(HashIndex);
			CurrentTool = HashIndex;
		}
	}
}