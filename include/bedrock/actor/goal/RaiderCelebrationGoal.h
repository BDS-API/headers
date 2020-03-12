#pragma once

#include <string>
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"


class RaiderCelebrationGoal : Goal {

public:
    virtual void start();
    ~RaiderCelebrationGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void stop();
//  RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&); //TODO: incomplete function definition
};
