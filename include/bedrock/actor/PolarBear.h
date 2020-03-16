#pragma once

#include "Animal.h"


class PolarBear : public Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual ~PolarBear(); // _ZN9PolarBearD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN9PolarBear10normalTickEv
    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9PolarBearC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getStandingAnimationScale(float); // _ZN9PolarBear25getStandingAnimationScaleEf
};
