// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Space_GameJam.h"
#include "Space_GameJamGameMode.h"
#include "Space_GameJamPawn.h"

ASpace_GameJamGameMode::ASpace_GameJamGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ASpace_GameJamPawn::StaticClass();
}
