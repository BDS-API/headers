#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class MoveTowardsTargetGoal : Goal {

public:
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    ~MoveTowardsTargetGoal();
    MoveTowardsTargetGoal(Mob &, float, float);
};
