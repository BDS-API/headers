#pragma once

#include "Monster.h"


class IllagerBeast : public Monster {

public:
    virtual ~IllagerBeast(); // _ZN12IllagerBeastD2Ev
    virtual void __fake_function0(); // fake
    virtual void blockedByShield(ActorDamageSource const&, Actor &); // _ZN12IllagerBeast15blockedByShieldERK17ActorDamageSourceR5Actor
    virtual void aiStep(); // _ZN12IllagerBeast6aiStepEv
    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12IllagerBeastC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
