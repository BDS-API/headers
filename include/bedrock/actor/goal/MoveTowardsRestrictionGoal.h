#pragma once

class MoveTowardsRestrictionGoal : Goal {

public:
    virtual MoveTowardsRestrictionGoal::~MoveTowardsRestrictionGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveTowardsRestrictionGoal(Mob &, float);
};
