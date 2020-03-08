#pragma once

#include "../Mob"


class MoveTowardsRestrictionGoal : Goal {

public:
    MoveTowardsRestrictionGoal::~MoveTowardsRestrictionGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsRestrictionGoal(Mob &, float);
};
