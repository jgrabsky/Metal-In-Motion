/**

Goals for ball bearings in Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

These are generally used as the parent actor for goals within the game.

*********************************************************************************/

#include "BallBearingGoal.h"
#include "Components/SphereComponent.h"
#include "Components/BillboardComponent.h"


/**
Constructor for a goal for ball bearings.
*********************************************************************************/

ABallBearingGoal::ABallBearingGoal()
{
	SetActorHiddenInGame(false);
}


/**
Hide the collision and sprite components in-game.
*********************************************************************************/

void ABallBearingGoal::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	GetCollisionComponent()->SetHiddenInGame(true);

#if WITH_EDITORONLY_DATA
	GetSpriteComponent()->SetHiddenInGame(true);
#endif
}


/**
Add a ball bearing to the list of proximate bearings we're maintaining.
*********************************************************************************/

void ABallBearingGoal::NotifyActorBeginOverlap(AActor* otherActor)
{
	Super::NotifyActorBeginOverlap(otherActor);

	ABallBearing* ballBearing = Cast<ABallBearing>(otherActor);

	if (ballBearing != nullptr &&
		ballBearing->Magnetized == true)
	{
		BallBearings.AddUnique(ballBearing);
	}
}


/**
Remove a ball bearing from the list of proximate bearings we're maintaining.
*********************************************************************************/

void ABallBearingGoal::NotifyActorEndOverlap(AActor* otherActor)
{
	Super::NotifyActorEndOverlap(otherActor);

	ABallBearing* ballBearing = Cast<ABallBearing>(otherActor);

	if (ballBearing != nullptr &&
		ballBearing->Magnetized == true)
	{
		BallBearings.Remove(ballBearing);
	}
}
