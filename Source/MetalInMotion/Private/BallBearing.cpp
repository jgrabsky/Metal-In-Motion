// Fill out your copyright notice in the Description page of Project Settings.


#include "BallBearing.h"

// Sets default values
ABallBearing::ABallBearing()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ballmesh"));

	BallMesh->SetSimulatePhysics(true);
	SetRootComponent(BallMesh);
}

// Called when the game starts or when spawned
void ABallBearing::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallBearing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABallBearing::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

