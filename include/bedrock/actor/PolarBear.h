#pragma once

#include "Animal.h"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    ~PolarBear(); // _ZN9PolarBearD2Ev
    virtual void normalTick(); // _ZN9PolarBear10normalTickEv
    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9PolarBearC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getStandingAnimationScale(float); // _ZN9PolarBear25getStandingAnimationScaleEf
};
