#pragma once

#include "../VillagerBase"


class ReceiveLoveGoal : Goal {

public:
    ReceiveLoveGoal::~ReceiveLoveGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ReceiveLoveGoal(VillagerBase &);
};
