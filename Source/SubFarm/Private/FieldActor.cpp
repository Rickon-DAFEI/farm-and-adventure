// Fill out your copyright notice in the Description page of Project Settings.


#include "FieldActor.h"

// Sets default values
AFieldActor::AFieldActor()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	FieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FieldMesh"));
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	RootComponent = MyScene;
	FieldMesh->SetupAttachment(MyScene);
	PlantMesh->SetupAttachment(FieldMesh);
	//PlantMesh->SetRelativeLocation(FVector(0, 0, 100.0f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFieldMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh_1__Box357.mesh_1__Box357'"));
	FieldMesh->SetStaticMesh(TempFieldMesh.Object);
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>TempPlantMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t5.t5'"));
	//PlantMesh->SetStaticMesh(TempPlantMesh.Object);
	//PlantTomato();
	CurrentState.State = 1;
	CurrentState.Lock = 0;
	CurrentState.CurrentLevel = 0;
	CurrentState.WeedsTime = 0;
	CurrentState.LastWeedingTime = 0;
	CurrentState.Worth = 100;
	CurrentState.HavePlant = 0;
}

// Called when the game starts or when spawned
void AFieldActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFieldActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult HitResult;
}

void AFieldActor::IsLookAt()
{
	if (FieldMesh)
	{
		FieldMesh->SetRenderCustomDepth(true);
	}
}

void AFieldActor::EndLookAt()
{
	if (FieldMesh)
	{
		FieldMesh->SetRenderCustomDepth(false);
	}
}

void AFieldActor::Plant(int HashIndex)
{
	const FMyItemTableStruct* TableRow = UMyItemObject::FindItemTableRow(HashIndex);
	
	if (TableRow)
	{
		const TArray<FGrowthStepsStruct>& GrowthSteps = TableRow->GrowthSteps;
		const TArray<FOutcomeStruct>& Outcomes = TableRow->Outcome;
		PlantGrowthLevel = GrowthSteps;
		OutcomeList = Outcomes;
		FString GrowthMeshPath = PlantGrowthLevel[0].MeshPath;
		UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *GrowthMeshPath));
		if (Mesh)
		{
			PlantMesh->SetStaticMesh(Mesh);
			CurrentState.HavePlant = 1;
			CurrentState.CurrentLevel = 1;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::Growth, PlantGrowthLevel[0].NeedTime,false);
		}
	}
}

void AFieldActor::Growth()
{
	int maxLevel = PlantGrowthLevel.Num();
	UStaticMesh* LoadedMesh = nullptr;
	if (CurrentState.CurrentLevel < PlantGrowthLevel.Num())
	{
		FString GrowthMeshPath = PlantGrowthLevel[CurrentState.CurrentLevel].MeshPath;
		LoadedMesh = LoadObject<UStaticMesh>(nullptr, *GrowthMeshPath);
	}
	if (LoadedMesh)
	{
		PlantMesh->SetStaticMesh(LoadedMesh);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::Growth, PlantGrowthLevel[CurrentState.CurrentLevel].NeedTime, false);
		CurrentState.CurrentLevel++;
	}
}

TArray<FOutcomeStruct> AFieldActor::Harvest()
{
	int maxLevel = PlantGrowthLevel.Num();
	if (CurrentState.CurrentLevel == maxLevel) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Empty Field"));
		PlantMesh->SetStaticMesh(nullptr);
		CurrentState.CurrentLevel = 0;
		CurrentState.HavePlant = 0;
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		return OutcomeList;

	}
	return TArray<FOutcomeStruct>();
}

int32 AFieldActor::GetState()
{
	return CurrentState.State;
}

bool AFieldActor::CheckHasPlant()
{
	return CurrentState.HavePlant;
}

bool AFieldActor::CheckCanHarvest()
{
	return CurrentState.CurrentLevel == PlantGrowthLevel.Num();
}


int AFieldActor::BuyField()
{
	CurrentState.State = 3;
	CurrentState.Lock = false;
	return CurrentState.Worth;
}

