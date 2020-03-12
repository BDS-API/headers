#pragma once

#include <string>
#include "Goal.h"


class FollowParentGoal : Goal {

public:
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void stop();
    ~FollowParentGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canUse();
    FollowParentGoal(Mob &, float);
};
