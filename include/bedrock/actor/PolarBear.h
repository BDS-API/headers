#pragma once

#include "Animal.h"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual void normalTick();
    ~PolarBear();
    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
