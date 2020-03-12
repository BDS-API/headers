#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class MoveTowardsRestrictionGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~MoveTowardsRestrictionGoal();
    virtual void start();
    MoveTowardsRestrictionGoal(Mob &, float);
};
