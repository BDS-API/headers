#pragma once

#include "../VillagerBase.h"
#include "Goal.h"
#include <string>


class ReceiveLoveGoal : Goal {

public:
    ~ReceiveLoveGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    ReceiveLoveGoal(VillagerBase &);
};
