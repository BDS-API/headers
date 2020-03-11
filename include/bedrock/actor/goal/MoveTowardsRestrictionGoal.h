#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class MoveTowardsRestrictionGoal : Goal {

public:
    virtual ~MoveTowardsRestrictionGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsRestrictionGoal(Mob &, float);
};
