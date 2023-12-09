// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRootComponent"));
	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArm"));
	RootComponent = MyRoot;
	MySpringArm->SetupAttachment(MyRoot);
	MyCamera->SetupAttachment(MySpringArm);
	MySpringArm->bDoCollisionTest = false;
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	TestA();

	TSubclassOf<UMyObject> MySubClassObject = UMyObject::StaticClass();
	MyTestObject = NewObject<UMyObject>(GetWorld(),MySubClassObject );
	if (MyTestObject) {
		UE_LOG(LogTemp, Warning, TEXT("MyTestObject is %s"),*MyTestObject->GetName());
		UE_LOG(LogTemp, Warning, TEXT("MyHealth is %f"), MyTestObject->MyDataTableStruct.Health);
		UE_LOG(LogTemp, Warning, TEXT("MyName is %s"), *MyTestObject->MyDataTableStruct.Name);
		UE_LOG(LogTemp, Warning, TEXT("MyLevel is %d"), MyTestObject->MyDataTableStruct.Level);


	}
	MyInstance = Cast<UMyGameInstance>(GetWorld()->GetFirstLocalPlayerFromController()->GetGameInstance());
	if (MyInstance) {
		UE_LOG(LogTemp, Warning, TEXT("MyInstance is %s"), *MyInstance->GetName());
		UE_LOG(LogTemp, Warning, TEXT("MyAppID is %s"), *MyInstance->MyAppID);
		UE_LOG(LogTemp, Warning, TEXT("MyUserID is %s"), *MyInstance->MyUserID);
		UE_LOG(LogTemp, Warning, TEXT("MyName is %s"), *MyInstance->MyName);
	}

	FVector MyLocation = FVector(0, 0, 0);
	FRotator MyRotation = FRotator(-50, 0, 0);
	FVector MyScale = FVector(1, 1, 1);

	SetActorLocation(MyLocation);
	SetActorRotation(MyRotation);
	SetActorScale3D(MyScale);

}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::PrintF1()
{
}

bool AMyPawn::PrintF2()
{
	return false;
}

void AMyPawn::TestA_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("testa"));
}

//void AMyPawn::Test1()
//{
//}
//
//int AMyPawn::Test2()
//{
//	return 0;
//}
//
//void AMyPawn::Test11(const FString& MyString)
//{
//}
//
//int AMyPawn::Test22(const FString& MyString)
//{
//	return 0;
//}

int AMyPawn::TestB_Implementation()
{
	return 0;
}

void AMyPawn::TestC_Implementation(const FString& MyString)
{
}

int AMyPawn::TestD_Implementation(const FString& MyString)
{
	return 0;
}

void AMyPawn::PrintTest()
{
}

void AMyPawn::Zoom(bool Dirction, float ZoomSpeed)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("ZOOM")));
	if (MySpringArm->TargetArmLength >= 300 && MySpringArm->TargetArmLength <= 2000) {

		MySpringArm->TargetArmLength += (Dirction ? 1 : -1) * (ZoomSpeed * 2);
		MySpringArm->TargetArmLength = fmin(MySpringArm->TargetArmLength, 2000);
		MySpringArm->TargetArmLength = fmax(MySpringArm->TargetArmLength, 300);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Spring ArmLength is %f"), MySpringArm->TargetArmLength));
	}

}
