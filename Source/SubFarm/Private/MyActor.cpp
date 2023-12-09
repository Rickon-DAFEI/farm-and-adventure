// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyScene = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticle"));
	MyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBox"));
	MyAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MyAudio"));


	RootComponent = MyScene;
	MyMesh->SetupAttachment(MyScene);
	MyParticle->SetupAttachment(MyScene);
	MyBox->SetupAttachment(MyScene);
	MyAudio->SetupAttachment(MyBox);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>TempStaticMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MyMesh->SetStaticMesh(TempStaticMesh.Object);
	static ConstructorHelpers::FObjectFinder<UParticleSystem>TempParticle(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	MyParticle->SetTemplate(TempParticle.Object);
	static ConstructorHelpers::FObjectFinder<USoundWave>TempSound(TEXT("/Script/Engine.SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	MyAudio->SetSound(TempSound.Object);

	static ConstructorHelpers::FClassFinder<AActor>TempMyActor(TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/Blueprint_CeilingLight.Blueprint_CeilingLight_C'"));

	MyActor = TempMyActor.Class;

	// collsion setting
	MyBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	/*MyBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	MyBox->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	MyBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MyBox->SetCollisionEnabled(ECollisionEnabled::ProbeOnly);
	MyBox->SetCollisionEnabled(ECollisionEnabled::QueryAndProbe);*/
	// collsion object type
	MyBox->SetCollisionObjectType(ECC_WorldDynamic);

	/*MyBox->SetCollisionObjectType(ECC_WorldStatic);
	MyBox->SetCollisionObjectType(ECC_Pawn);
	MyBox->SetCollisionObjectType(ECC_PhysicsBody);
	MyBox->SetCollisionObjectType(ECC_Vehicle);
	MyBox->SetCollisionObjectType(ECC_Destructible);*/

	// collsion reaction
	MyBox->SetCollisionResponseToAllChannels(ECR_Overlap);

	//MyBox->SetCollisionResponseToAllChannels(ECR_Block);
	//MyBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	//MyBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	//MyBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	//MyBox->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Ignore);

	MyBox->SetBoxExtent(FVector(64, 64, 64));
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	if (MyParticle) {
		MyParticle->Deactivate();
	}
	if (MyAudio) {
		MyAudio->Deactivate();
	}
	if (MyActor) {
		UE_LOG(LogTemp, Warning, TEXT("MyActor is %s"), *MyActor->GetName());
	}
	// LoadObject Dynamic load resources
	UStaticMesh* MyTmpStaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	
	if (MyTmpStaticMesh) {
		MyMesh->SetStaticMesh(MyTmpStaticMesh);
	}

	// LoadClass Dynamic load classes

	UClass* MyTmpClass = LoadClass<AActor>(this, TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/Blueprint_WallSconce.Blueprint_WallSconce_C'"));

	if (MyTmpClass) {
		AActor* SpawnActor = GetWorld()->SpawnActor<AActor>(MyTmpClass, FVector::ZeroVector, FRotator::ZeroRotator);
	}
	MyBox->OnComponentBeginOverlap.AddDynamic(this,&AMyActor::BeginOverlapFunciton);
	MyBox->OnComponentEndOverlap.AddDynamic(this,&AMyActor::EndOverlapFunciton);
	MyBox->OnComponentHit.AddDynamic(this, &AMyActor::HitFunction);

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MyOffset = FVector(1, 0, 0);
	FHitResult HitResult;
	//AddActorLocalOffset(MyOffset, false, &HitResult);
}

void AMyActor::BeginOverlapFunciton(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActor);
	if (MyCharacter) {
		UGameplayStatics::ApplyDamage(MyCharacter,5.0f,nullptr,this,UDamageType::StaticClass());
	}
	MyParticle->Activate();
	MyAudio->Activate();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("BeginOverLapEvent is success"));
}

void AMyActor::EndOverlapFunciton(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	MyParticle->Deactivate();
	MyAudio->Deactivate();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("End OverLapEvent is success"));

}

void AMyActor::HitFunction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("HitFunction is success"));
}

