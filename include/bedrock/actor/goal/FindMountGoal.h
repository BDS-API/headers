#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class FindMountGoal : Goal {

public:
    virtual ~FindMountGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FindMountGoal(Mob &, float, int, bool, bool, float, int);
    bool isInMountRange();
    void getAttackReachSqr();
};
