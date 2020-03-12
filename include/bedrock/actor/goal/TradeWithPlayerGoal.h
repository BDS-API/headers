#pragma once

#include <string>
#include "Goal.h"


class TradeWithPlayerGoal : Goal {

public:
    virtual bool canUse();
    ~TradeWithPlayerGoal();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    TradeWithPlayerGoal(Mob &);
};
