#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class FindUnderwaterTreasureGoal : Goal {

public:
    virtual ~FindUnderwaterTreasureGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FindUnderwaterTreasureGoal(Mob &, float, int, int);
};
