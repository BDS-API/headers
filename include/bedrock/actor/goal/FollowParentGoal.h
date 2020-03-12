#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FollowParentGoal : Goal {

public:
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~FollowParentGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    FollowParentGoal(Mob &, float);
};
