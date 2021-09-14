// Copyright Epic Games, Inc. All Rights Reserved.

#include "SideScroll2DGameMode.h"
#include "SideScroll2DCharacter.h"

ASideScroll2DGameMode::ASideScroll2DGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASideScroll2DCharacter::StaticClass();	
}
