#pragma once

class MoveTowardsRestrictionGoal : Goal {

public:
    virtual ~MoveTowardsRestrictionGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void MoveTowardsRestrictionGoal(Mob &, float);
};
