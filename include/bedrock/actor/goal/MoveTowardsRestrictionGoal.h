#pragma once

#include <string>
#include "Goal.h"


class MoveTowardsRestrictionGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canUse();
    ~MoveTowardsRestrictionGoal();
    MoveTowardsRestrictionGoal(Mob &, float);
};
