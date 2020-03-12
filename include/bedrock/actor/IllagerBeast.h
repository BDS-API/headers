#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "Monster.h"


class IllagerBeast : Monster {

public:
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    ~IllagerBeast();
    virtual void aiStep();
    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
