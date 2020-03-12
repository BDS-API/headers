#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FindMountGoal : Goal {

public:
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~FindMountGoal();
    virtual void start();
    bool isInMountRange();
    FindMountGoal(Mob &, float, int, bool, bool, float, int);
    void getAttackReachSqr();
};
