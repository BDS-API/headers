#pragma once

class MoveTowardsTargetGoal : Goal {

public:
    virtual ~MoveTowardsTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void MoveTowardsTargetGoal(Mob &, float, float);
};
