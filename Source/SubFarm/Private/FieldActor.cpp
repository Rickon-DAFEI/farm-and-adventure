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
	MyAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MyAudio"));
	
	//PlantMesh->SetRelativeLocation(FVector(0, 0, 100.0f));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFieldMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh_1__Box357.mesh_1__Box357'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempFieldMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/unlock.unlock'"));
	FieldMesh->SetStaticMesh(TempFieldMesh.Object);
	/// Script / Engine.StaticMesh'/Game/FarmAndAdvanture/plants/unlock.unlock'
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>TempPlantMesh(TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/t5.t5'"));
	//PlantMesh->SetStaticMesh(TempPlantMesh.Object);
	//PlantTomato();
	CurrentState.State = 0;
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
	if (MyAudio) {
		MyAudio->Deactivate();
	}
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
	FString AudioFilePath = "/Script/Engine.SoundWave'/Game/Music/Digging.Digging'";

	USoundWave* LoadedSoundWave = LoadObject<USoundWave>(nullptr, *AudioFilePath);

	if (LoadedSoundWave)
	{
		MyAudio->SetSound(LoadedSoundWave);
		MyAudio->Activate();
	}
	CurrentState.HashIndex = HashIndex;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::FinishPlant, 1.5f, false);
}

void AFieldActor::FinishPlant()
{
	const FMyItemTableStruct* TableRow = UMyItemObject::FindItemTableRow(CurrentState.HashIndex);

	if (TableRow)
	{
		const TArray<FGrowthStepsStruct>& GrowthSteps = TableRow->GrowthSteps;
		const TArray<FOutcomeStruct>& Outcomes = TableRow->Outcome;
		if (!GrowthSteps.Num()) {
			return;
		}
		PlantGrowthLevel = GrowthSteps;
		OutcomeList = Outcomes;
		FString GrowthMeshPath = PlantGrowthLevel[0].MeshPath;
		UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *GrowthMeshPath));
		if (Mesh)
		{
			PlantMesh->SetStaticMesh(Mesh);
			CurrentState.HavePlant = 1;
			CurrentState.CurrentLevel = 1;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::Growth, PlantGrowthLevel[0].NeedTime, false);
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

void AFieldActor::Cultivate()
{
	FString AudioFilePath = "/Script/Engine.SoundWave'/Game/Music/Digging.Digging'";

	USoundWave* LoadedSoundWave = LoadObject<USoundWave>(nullptr, *AudioFilePath);

	if (LoadedSoundWave)
	{
		MyAudio->SetSound(LoadedSoundWave);
		MyAudio->Activate();
	}
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::FinishCultivate, 1.5f, false);
}



void AFieldActor::FinishCultivate()
{
	CurrentState.State = 2;
	UStaticMesh* LoadedMesh = nullptr;
	FString GrowthMeshPath = TEXT("/Script/Engine.StaticMesh'/Game/FarmAndAdvanture/plants/mesh_1__Box357.mesh_1__Box357'");
	LoadedMesh = LoadObject<UStaticMesh>(nullptr, *GrowthMeshPath);
	if (LoadedMesh) {
		FieldMesh->SetStaticMesh(LoadedMesh);
	}
	MyAudio->Deactivate();
}

TArray<FOutcomeStruct> AFieldActor::Harvest()
{
	FString AudioFilePath = "/Script/Engine.SoundWave'/Game/Music/Gain.Gain'";

	USoundWave* LoadedSoundWave = LoadObject<USoundWave>(nullptr, *AudioFilePath);

	if (LoadedSoundWave)
	{
		MyAudio->SetSound(LoadedSoundWave);
		MyAudio->Activate();
	}
	int maxLevel = PlantGrowthLevel.Num();
	if (CurrentState.CurrentLevel == maxLevel) {
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFieldActor::FinishHarvest, 1.5f, false);
		return OutcomeList;
	}


	return TArray<FOutcomeStruct>();
}

void AFieldActor::FinishHarvest()
{
	PlantMesh->SetStaticMesh(nullptr);
	CurrentState.CurrentLevel = 0;
	CurrentState.HavePlant = 0;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	MyAudio->Deactivate();
}


int AFieldActor::BuyField()
{
	FString AudioFilePath = "/Script/Engine.SoundWave'/Game/Music/Buy.Buy'";

	USoundWave* LoadedSoundWave = LoadObject<USoundWave>(nullptr, *AudioFilePath);

	if (LoadedSoundWave)
	{
		MyAudio->SetSound(LoadedSoundWave);
		MyAudio->Activate();
	}
	CurrentState.State = 1;
	CurrentState.Lock = false;
	return CurrentState.Worth;
}

