#pragma once

#include <string>
#include "../Mob.h"
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"
#include "../../definition/DefinitionTrigger.h"


class RaiderCelebrationGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    virtual void start();
    ~RaiderCelebrationGoal();
    virtual void appendDebugInfo(std::string &)const;
//  RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&); //TODO: incomplete function definition
};
