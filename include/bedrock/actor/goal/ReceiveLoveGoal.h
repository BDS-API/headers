#pragma once

#include "../VillagerBase"


class ReceiveLoveGoal : Goal {

public:
    virtual ReceiveLoveGoal::~ReceiveLoveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ReceiveLoveGoal(VillagerBase &);
};
