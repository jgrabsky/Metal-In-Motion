/**

The base game mode for Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

*********************************************************************************/

#include "MetalInMotionGameModeBase.h"
#include "BallBearingHUD.h"


/**
Construct the game mode, assigning a debugging HUD class.
*********************************************************************************/

AMetalInMotionGameModeBase::AMetalInMotionGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	HUDClass = ABallBearingHUD::StaticClass();
}
