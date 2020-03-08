#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"
#include "../../../unmapped/FloatRange"


class RaiderCelebrationGoal : Goal {

public:
    virtual RaiderCelebrationGoal::~RaiderCelebrationGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&);
};
