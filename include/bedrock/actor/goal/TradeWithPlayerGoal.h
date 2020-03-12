#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class TradeWithPlayerGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~TradeWithPlayerGoal();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual bool canContinueToUse();
    TradeWithPlayerGoal(Mob &);
};
