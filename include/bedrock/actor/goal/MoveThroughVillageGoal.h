#pragma once

#include <string>
#include "Goal.h"


class MoveThroughVillageGoal : Goal {

public:
    ~MoveThroughVillageGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    MoveThroughVillageGoal(Mob &, float, bool);
};
