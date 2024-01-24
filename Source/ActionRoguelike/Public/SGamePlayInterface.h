// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGamePlayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USGamePlayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
// this class consists of pure virtual function that can be implemented in any class that inherits from this interface
class ACTIONROGUELIKE_API ISGamePlayInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)	// BlueprintNativeEvent means that the function will be implemented in C++ and can be overridden in Blueprint
	// BlueprintCallable means that the function can be called from Blueprint
	void Interact(APawn* InstigatorPawn);
};
