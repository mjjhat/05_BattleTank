// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const
    {
        //Casts out to see if there ATank is being possessed by the player, and to get it if so
        return Cast<ATank>(GetPawn());
    }