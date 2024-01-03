// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArmComponent"));
	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCameraComponent"));

	MyWidgetHealth = CreateDefaultSubobject<UWidgetComponent>(TEXT("MyWidgetComponent"));
	//MyWidgetHealth->SetupAttachment(RootComponent);
	CameraHeight = 450.0f;
	static ConstructorHelpers::FClassFinder<UUserWidget>WidgetClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyBackpackWidget.BP_MyBackpackWidget_C'"));
	//MyWidgetHealth->SetWidgetClass(WidgetClass.Class);
	//MyWidgetHealth->SetRelativeLocation(FVector(0, 0, 100));
	//MyWidgetHealth->SetWidgetSpace(EWidgetSpace::Screen);
	//MyWidgetHealth->SetDrawSize(FVector2D(400, 20));
	FRotator NewRotation = FRotator(-45.0f, 0.0f, 0.0f);
	FVector NewLocation = FVector(-CameraHeight, 0.0f, CameraHeight);

	MySpringArm->SetupAttachment(RootComponent);
	MyCamera->SetupAttachment(MySpringArm);
	MyCamera->SetWorldRotation(NewRotation);
	MyCamera->SetRelativeLocation(NewLocation);
	MySpringArm->SetupAttachment(RootComponent);
	// movement not effect character, but camera
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	// character face to up-speed diraction
	GetCharacterMovement()->bOrientRotationToMovement = true;

	MySpringArm->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller)) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer())) {
			Subsystem->AddMappingContext(DefaultMappingContext,0);
		}
	}
	//Attack();
	//CaclulateHealth();
	GetWorld()->GetTimerManager().SetTimer(Time,this,&AMyCharacter::PrintTime,1.0,true);

	if (Time.IsValid()) {
		GetWorld()->GetTimerManager().ClearTimer(Time);
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
		//EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	}
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0,Rotation.Yaw,0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(ForwardDirection,MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (Controller != nullptr) {
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UMyHealthWidget* MyWidget = Cast<UMyHealthWidget>(MyWidgetHealth->GetUserWidgetObject());
	if (MyWidget) {
		if (MyWidget->CurrentHealth <= 0) {
			return 0;
		}
		return MyWidget->CurrentHealth -= 5.0;
	}
	return 0.0f;
}

//void AMyCharacter::Attack()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Attack"));
//
//}
//
//void AMyCharacter::CaclulateHealth()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("CaclulateHealth"));
//}

void AMyCharacter::PrintTime()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("CurrentTime"));
}

void AMyCharacter::Zoom(bool Dirction, float ZoomSpeed)
{

	if (CameraHeight >= 300.0f && CameraHeight <= 1200.0f) {

		CameraHeight += (Dirction ? -1 : 1) * (ZoomSpeed * 2);
		CameraHeight = fmax(300, CameraHeight);
		CameraHeight = fmin(1200, CameraHeight);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("%f"), CameraHeight));
		FVector NewLocation = FVector(-CameraHeight, 0.0f, CameraHeight);
		MyCamera->SetRelativeLocation(NewLocation);
	}

}

void AMyCharacter::AddBackpackItems(TArray<FOutcomeStruct> *AddList)
{
	for (const FOutcomeStruct& AddItem : *AddList)
	{
		PlayerBackpack.AlterItemNumber(AddItem.HashIndex, AddItem.Number);
	}
}

void AMyCharacter::StopAnimation()
{


}

