// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBullet.h"

// Sets default values
AMyBullet::AMyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyBullet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyBulletComponent"));
	MySphere = CreateDefaultSubobject<USphereComponent>(TEXT("MySphereComponent"));
	MyProjectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MyProjectileComponent"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>TmpStaticMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	MyBullet->SetStaticMesh(TmpStaticMesh.Object);
	MyBullet->SetRelativeScale3D(FVector(0.4, 0.4, 0.4));
	RootComponent = MyBullet;
	MySphere->SetupAttachment(MyBullet);
	MyProjectile->SetUpdatedComponent(MyBullet);
	MyProjectile->InitialSpeed = 1200.0f;
	MyProjectile->MaxSpeed = 2400.0f;
	MyProjectile->bRotationFollowsVelocity = true;
	MyProjectile->bIsHomingProjectile = true;
	MyProjectile->ProjectileGravityScale = 1.5f;
}

// Called when the game starts or when spawned
void AMyBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

