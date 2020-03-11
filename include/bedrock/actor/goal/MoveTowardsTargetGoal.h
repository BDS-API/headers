#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class MoveTowardsTargetGoal : Goal {

public:
    virtual ~MoveTowardsTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsTargetGoal(Mob &, float, float);
};
