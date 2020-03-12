#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class MoveThroughVillageGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void stop();
    ~MoveThroughVillageGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    MoveThroughVillageGoal(Mob &, float, bool);
};
