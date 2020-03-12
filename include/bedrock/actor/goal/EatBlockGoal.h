#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>
#include "../../definition/DefinitionTrigger.h"


class EatBlockGoal : Goal {

public:
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    ~EatBlockGoal();
    EatBlockGoal(Mob &, DefinitionTrigger const&);
    void getEatAnimationTick();
};
