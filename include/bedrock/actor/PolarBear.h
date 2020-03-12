#pragma once

#include "Animal.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorDefinitionGroup.h"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    ~PolarBear();
    virtual void normalTick();
    void getStandingAnimationScale(float);
    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
