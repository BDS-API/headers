#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class FollowFlockGoal : Goal {

public:
    virtual ~FollowFlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowFlockGoal(Mob &, float);
};
