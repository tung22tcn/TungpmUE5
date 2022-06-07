// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawnVR.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyPawnVR::AMyPawnVR()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Root;
	Camera->SetupAttachment(Root);

}

// Called when the game starts or when spawned
void AMyPawnVR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnVR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawnVR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

