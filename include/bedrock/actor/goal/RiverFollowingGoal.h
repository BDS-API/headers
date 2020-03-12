#pragma once

#include <string>
#include "Goal.h"


class RiverFollowingGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    ~RiverFollowingGoal();
    virtual void stop();
    void determineSteerDirection();
    RiverFollowingGoal(Mob &, float, float);
};
