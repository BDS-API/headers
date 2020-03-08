#pragma once

#include "../Mob"


class TradeWithPlayerGoal : Goal {

public:
    virtual TradeWithPlayerGoal::~TradeWithPlayerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    TradeWithPlayerGoal(Mob &);
};
