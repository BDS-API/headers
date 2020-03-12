#pragma once

#include <string>
#include "Goal.h"


class FindUnderwaterTreasureGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canBeInterrupted();
    virtual void start();
    ~FindUnderwaterTreasureGoal();
    FindUnderwaterTreasureGoal(Mob &, float, int, int);
};
