#pragma once

#include "../../unmapped/ActorDefinitionGroup"


class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual PolarBear::~PolarBear();
    virtual void normalTick(void);

    PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
