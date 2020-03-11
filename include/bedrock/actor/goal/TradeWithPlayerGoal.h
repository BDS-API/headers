#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class TradeWithPlayerGoal : Goal {

public:
    virtual ~TradeWithPlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    TradeWithPlayerGoal(Mob &);
};
