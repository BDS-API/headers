#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "damagesource/ActorDamageSource.h"
#include "./Monster.h"
#include "unmapped/ActorDefinitionGroup.h"


class IllagerBeast : Monster {

public:
    virtual ~IllagerBeast();
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep();

    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
