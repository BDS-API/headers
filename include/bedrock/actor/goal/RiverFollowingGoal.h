#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RiverFollowingGoal : Goal {

public:
    virtual void tick();
    virtual bool canContinueToUse();
    ~RiverFollowingGoal();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    RiverFollowingGoal(Mob &, float, float);
    void determineSteerDirection();
};
