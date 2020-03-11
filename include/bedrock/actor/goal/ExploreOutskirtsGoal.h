#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class ExploreOutskirtsGoal : Goal {

public:
    virtual ~ExploreOutskirtsGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ExploreOutskirtsGoal(Mob &, float, float, int);
};
