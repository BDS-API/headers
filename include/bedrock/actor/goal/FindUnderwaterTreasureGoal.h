#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FindUnderwaterTreasureGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void tick();
    ~FindUnderwaterTreasureGoal();
    virtual void start();
    virtual bool canUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    FindUnderwaterTreasureGoal(Mob &, float, int, int);
};
