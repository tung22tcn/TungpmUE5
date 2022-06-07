// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHandVR.h"
#include "MotionControllerComponent.h"

// Sets default values
AMyHandVR::AMyHandVR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("RootComponent");
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>("MotionController");
	SK_Hand= CreateDefaultSubobject<USkeletalMeshComponent>("SK_Hand");

	RootComponent= Root;
	MotionController->SetupAttachment(Root);
	SK_Hand->SetupAttachment(MotionController);

}

// Called when the game starts or when spawned
void AMyHandVR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyHandVR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

