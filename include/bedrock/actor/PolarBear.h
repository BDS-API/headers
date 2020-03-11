#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Animal.h"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual ~PolarBear();
    virtual void normalTick();

    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
