#pragma once

#include "./Goal.h"
#include "../VillagerBase.h"
#include <string>


class ReceiveLoveGoal : Goal {

public:
    virtual ~ReceiveLoveGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ReceiveLoveGoal(VillagerBase &);
};
