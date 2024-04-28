// Copyright Iheb Soltana.


#include "Player/CrypticPlayerState.h"

#include "AbilitySystem/CrypticAbilitySystemComponent.h"
#include "AbilitySystem/CrypticAttributeSet.h"

ACrypticPlayerState::ACrypticPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UCrypticAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	

	AttributeSet = CreateDefaultSubobject<UCrypticAttributeSet>("AttributeSet");
	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* ACrypticPlayerState::GetAbilitySystemComponent() const
{
	return  AbilitySystemComponent;
}


