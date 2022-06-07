// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyHandVR.generated.h"

UCLASS()
class TUNGPMUE5_API AMyHandVR : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyHandVR();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 
	UPROPERTY()
	class USceneComponent * Root;

	UPROPERTY()
	class UMotionControllerComponent * MotionController;

	UPROPERTY()
	class USkeletalMeshComponent * SK_Hand;
};
