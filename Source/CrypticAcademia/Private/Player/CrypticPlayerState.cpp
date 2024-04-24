// Copyright Iheb Soltana.


#include "Player/CrypticPlayerState.h"

#include "AbilitySystem/CrypticAbilitySystemComponent.h"
#include "AbilitySystem/CrypticAttributeSet.h"

ACrypticPlayerState::ACrypticPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UCrypticAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UCrypticAttributeSet>("AttributeSet");
	NetUpdateFrequency = 100.f;
}


