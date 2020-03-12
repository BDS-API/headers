#pragma once

#include <string>
#include "Goal.h"


class ExploreOutskirtsGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    ~ExploreOutskirtsGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    ExploreOutskirtsGoal(Mob &, float, float, int);
};
