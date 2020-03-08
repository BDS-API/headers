#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class IllagerBeast : Monster {

public:
    IllagerBeast::~IllagerBeast()
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep();

    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
