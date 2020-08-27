// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSWeapon::AFPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AFPSWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFPSWeapon::Fire()
{
	AActor* owner = GetOwner();
	if (owner)
	{
		FVector eyeLocation;
		FRotator eyeRotation;
		owner->GetActorEyesViewPoint(eyeLocation, eyeRotation);

		FVector shotDirection = eyeRotation.Vector();

		FVector traceEnd = eyeLocation + (shotDirection * 10000);
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(owner);
		queryParams.AddIgnoredActor(this);
		queryParams.bTraceComplex = true;


		FHitResult hit;
		if (GetWorld()->LineTraceSingleByChannel(hit, eyeLocation, traceEnd, ECC_Visibility, queryParams))
		{
			AActor* hitActor = hit.GetActor();

			UGameplayStatics::ApplyPointDamage(hitActor, 20.0f, shotDirection, hit, owner->GetInstigatorController(), this, DamageType);
			
		}

		DrawDebugLine(GetWorld(), eyeLocation, traceEnd, FColor::White, false, 1.0f, 0, 1.0f);
	}
}



// Called every frame
void AFPSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

