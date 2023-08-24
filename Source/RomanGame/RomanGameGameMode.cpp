// Copyright Epic Games, Inc. All Rights Reserved.

#include "RomanGameGameMode.h"
#include "RomanGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARomanGameGameMode::ARomanGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
