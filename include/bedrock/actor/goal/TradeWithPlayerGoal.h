#pragma once

#include "../Mob"


class TradeWithPlayerGoal : Goal {

public:
    virtual TradeWithPlayerGoal::~TradeWithPlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    TradeWithPlayerGoal(Mob &);
};
