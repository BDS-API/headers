#pragma once

class PolarBear : Animal {

public:
    static long STAND_ANIMATION_TICKS;

    virtual ~PolarBear();
    virtual void normalTick(void);

    void PolarBear(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getStandingAnimationScale(float);
};
