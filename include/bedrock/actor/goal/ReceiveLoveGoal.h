#pragma once

#include <string>
#include "Goal.h"


class ReceiveLoveGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~ReceiveLoveGoal();
    virtual bool canUse();
    ReceiveLoveGoal(VillagerBase &);
};
