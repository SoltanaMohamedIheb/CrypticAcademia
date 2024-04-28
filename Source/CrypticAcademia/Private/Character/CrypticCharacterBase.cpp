// Copyright Iheb Soltana.


#include "Character/CrypticCharacterBase.h"

#include "AbilitySystemComponent.h"
#include "Player/CrypticPlayerState.h"

// Sets default values
ACrypticCharacterBase::ACrypticCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACrypticCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	//Init Ability Actor Info For The Server
	InitAbilityActorInfo();
}

void ACrypticCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	//Init Ability Actor Info For The Client
	InitAbilityActorInfo();
	
}

// Called when the game starts or when spawned
void ACrypticCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACrypticCharacterBase::InitAbilityActorInfo()
{
	ACrypticPlayerState* CrypticPlayerState = GetPlayerState<ACrypticPlayerState>();
	check(CrypticPlayerState);
	CrypticPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(CrypticPlayerState,this);
	AbilitySystemComponent = CrypticPlayerState->GetAbilitySystemComponent();
	AttributeSet = CrypticPlayerState->GetAttributeSet();
}

// Called every frame
void ACrypticCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACrypticCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

