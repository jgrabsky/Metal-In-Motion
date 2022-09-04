/**

Goals for ball bearings in Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

These are generally used as the parent actor for goals within the game.

*********************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "BallBearing.h"
#include "BallBearingGoal.generated.h"


/**
A goal for ball bearings in Metal in Motion.
*********************************************************************************/

UCLASS()
class METALINMOTION_API ABallBearingGoal : public ATriggerSphere
{
	GENERATED_BODY()

public:

	// Constructor for a goal for ball bearings.
	ABallBearingGoal();

protected:

	// Hide the collision and sprite components in-game.
	virtual void PostInitializeComponents() override;

	// Add a ball bearing to the list of proximate bearings we're maintaining.
	virtual void NotifyActorBeginOverlap(AActor* otherActor) override;

	// Remove a ball bearing from the list of proximate bearings we're maintaining.
	virtual void NotifyActorEndOverlap(AActor* otherActor) override;

private:

	// A list of proximate ball bearings.
	UPROPERTY(Transient)
		TArray<ABallBearing*> BallBearings;
};
