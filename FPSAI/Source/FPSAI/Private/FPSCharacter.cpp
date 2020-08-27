// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->bUsePawnControlRotation = true;

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFPSCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector() * value);
}

void AFPSCharacter::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector() * value);
}

void AFPSCharacter::BeginCrouch()
{
	Crouch();
}

void AFPSCharacter::EndCrouch()
{
	UnCrouch();
}

FVector AFPSCharacter::GetPawnViewLocation() const
{
	if (CameraComponent)
	{
		return CameraComponent->GetComponentLocation();
	}
	return Super::GetPawnViewLocation();
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AFPSCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("UnCrouch", IE_Released, this, &AFPSCharacter::EndCrouch);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::Jump);

}

