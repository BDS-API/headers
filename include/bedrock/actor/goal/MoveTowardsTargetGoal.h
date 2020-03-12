#pragma once

#include <string>
#include "Goal.h"


class MoveTowardsTargetGoal : Goal {

public:
    virtual void stop();
    virtual void start();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~MoveTowardsTargetGoal();
    MoveTowardsTargetGoal(Mob &, float, float);
};
