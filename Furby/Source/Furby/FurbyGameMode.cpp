// Copyright Epic Games, Inc. All Rights Reserved.

#include "FurbyGameMode.h"
#include "FurbyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFurbyGameMode::AFurbyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
