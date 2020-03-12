#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RandomSitGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    ~RandomSitGoal();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    RandomSitGoal(Mob &, float, float, float, float);
};
