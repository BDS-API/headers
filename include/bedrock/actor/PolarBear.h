#pragma once

#include "unmapped/ActorDefinitionIdentifier"
#include "unmapped/ActorDefinitionGroup"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    PolarBear::~PolarBear()
    virtual void normalTick();

    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
