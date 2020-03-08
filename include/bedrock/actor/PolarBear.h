#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual PolarBear::~PolarBear()
    virtual void normalTick();

    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
