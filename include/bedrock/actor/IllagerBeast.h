#pragma once

#include "Monster.h"


class IllagerBeast : Monster {

public:
    ~IllagerBeast();
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep();
    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
