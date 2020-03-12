#pragma once

#include <string>
#include "Goal.h"


class FindMountGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~FindMountGoal();
    virtual void stop();
    FindMountGoal(Mob &, float, int, bool, bool, float, int);
    void getAttackReachSqr();
    bool isInMountRange();
};
