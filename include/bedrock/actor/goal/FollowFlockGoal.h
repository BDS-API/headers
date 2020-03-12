#pragma once

#include <string>
#include "Goal.h"


class FollowFlockGoal : Goal {

public:
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~FollowFlockGoal();
    virtual void start();
    virtual void tick();
    virtual bool canBeInterrupted();
    FollowFlockGoal(Mob &, float);
};
