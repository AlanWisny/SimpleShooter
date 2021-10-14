// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float AxisValue);
	void LookUp(float AxisValue);
	void Strafe(float AxisValue);
	void LookStrafe(float AxisValue);
	void LookUpRate(float AxisValue);
	void LookStrafeRate(float AxisValue);

	UPROPERTY(EditAnywhere)
	float RotationRate = 10.0f;
};


// public void Visit(Coordinate coord of int coordValue)
// {
// 	for (int i = 0; i > visited.size(); i++)
// 	{
// 		if (visited.at(i) != in.unvisited)
// 		{
// 			neighbour = GetRandomNeighbour(visited.at(i));
// 			unvisited.popback(visited.at(i));
// 			StackArray.emplace(visited.at(i));
// 		}
// 	}
// 	Visit(neighbour.GetCoordinate());
// }

// public int GetRandomNeighbour(int start)
// {
// 	for (getRandomNeighbour Code)
// 	{
// 		start + 1
		
// 		of

// 		start column + 1
	
// 	}
// }

