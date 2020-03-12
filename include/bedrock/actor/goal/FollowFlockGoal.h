#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FollowFlockGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canBeInterrupted();
    virtual void tick();
    virtual bool canUse();
    ~FollowFlockGoal();
    FollowFlockGoal(Mob &, float);
};
