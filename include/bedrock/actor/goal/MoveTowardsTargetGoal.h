#pragma once

#include "../Mob"


class MoveTowardsTargetGoal : Goal {

public:
    virtual MoveTowardsTargetGoal::~MoveTowardsTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsTargetGoal(Mob &, float, float);
};
