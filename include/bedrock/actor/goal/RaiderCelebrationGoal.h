#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "./Goal.h"
#include "../Mob.h"
#include "../../../unmapped/FloatRange.h"
#include <string>


class RaiderCelebrationGoal : Goal {

public:
    virtual ~RaiderCelebrationGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

//  RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&); //TODO: incomplete function definition
};
