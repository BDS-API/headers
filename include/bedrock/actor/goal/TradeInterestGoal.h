#pragma once

#include <string>
#include "Goal.h"


class TradeInterestGoal : Goal {

public:
    ~TradeInterestGoal();
    virtual void stop();
    virtual void tick();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    void _isLookingAtMe(Player const&)const;
    TradeInterestGoal(Mob &, float, float, float, float, float);
    bool isRunning();
};
