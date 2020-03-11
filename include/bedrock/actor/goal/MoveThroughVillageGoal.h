#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class MoveThroughVillageGoal : Goal {

public:
    virtual ~MoveThroughVillageGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    MoveThroughVillageGoal(Mob &, float, bool);
};
