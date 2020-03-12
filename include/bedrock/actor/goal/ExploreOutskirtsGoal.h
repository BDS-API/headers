#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class ExploreOutskirtsGoal : Goal {

public:
    virtual void tick();
    virtual void stop();
    ~ExploreOutskirtsGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void start();
    ExploreOutskirtsGoal(Mob &, float, float, int);
};
