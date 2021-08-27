// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
    Super::BeginPlay();
// Below is to make sure that the tank is being possessed- get to see if something is there. 
    auto ControlledTank = GetControlledTank();
    if (!ControlledTank)
    {
         UE_LOG(LogTemp, Warning, TEXT("AIController not possessing tank"));
    }
    else
    {
        // Attach to string (%s) the name of the controlled Tank, the * points to the specific object to be found (controlled tank)   
        UE_LOG(LogTemp, Warning, TEXT("AIController posessing: %s"), *ControlledTank->GetName());
    }   
}


ATank *ATankAIController::GetControlledTank() const
{
    //Casts out to see if there ATank is being possessed by the player, and to get it if so
    return Cast<ATank>(GetPawn());
}

