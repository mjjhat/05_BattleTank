// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
    Super::BeginPlay();
// Below is to make sure that the tank is being possessed- get to see if something is there.
/* auto removes the change of the variable being converted into something else and 
    spend less time writing code tha the compiler knows, that the variable declared will
    be automatically deducted*/
    auto PlayerTank = GetPlayerTank();
    if (!PlayerTank)
    {
         UE_LOG(LogTemp, Warning, TEXT("AIController not possessing tank"));
    }
    else
    {
        // Attach to string (%s) the name of the controlled Tank, the * points to the specific object to be found (controlled tank)   
        UE_LOG(LogTemp, Warning, TEXT("AIController posessing: %s"), *PlayerTank->GetName());
    }   
}


ATank *ATankAIController::GetControlledTank() const
{
    //Casts out to see if there ATank is being possessed by the player, and to get it if so
    return Cast<ATank>(GetPawn());
}

// // getting the AI tank to find the Player Tank.
// ATank* ATankAIController::GetPlayerTank() const
// {
//     //create a variable and make it get player controller from the world, and get the player pawn.
//     auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
//     if (!PlayerPawn) {return nullptr;}// if not that Player Pawn, returns null pointer so not cause issue
//     //Remember to cover all pointers with nullptrs
//     return Cast<ATank>(PlayerPawn);   
// }
