/**

The base game mode for Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

*********************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MetalInMotionGameModeBase.generated.h"


/**
The base game mode for Metal in Motion.
*********************************************************************************/

UCLASS()
class METALINMOTION_API AMetalInMotionGameModeBase : public AGameMode
{
	GENERATED_BODY()

public:

	// Construct the game mode, assigning a debugging HUD class.
	AMetalInMotionGameModeBase();

	// Test function, can be called from the console.
	UFUNCTION(Exec)
		void MyTestFunction()
	{
		// Do something.
	}
};
