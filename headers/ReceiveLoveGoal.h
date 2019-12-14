#pragma once

class ReceiveLoveGoal : Goal {

public:
    virtual ~ReceiveLoveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void ReceiveLoveGoal(VillagerBase &);
};
