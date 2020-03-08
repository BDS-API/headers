#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class IllagerBeast : Monster {

public:
    virtual IllagerBeast::~IllagerBeast()
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep();

    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
