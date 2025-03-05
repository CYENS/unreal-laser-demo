// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaserDemoGameMode.h"
#include "LaserDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaserDemoGameMode::ALaserDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
