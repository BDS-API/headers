#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>
#include "../Player.h"


class TradeInterestGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void start();
    ~TradeInterestGoal();
    virtual void tick();
    bool isRunning();
    void _isLookingAtMe(Player const&)const;
    TradeInterestGoal(Mob &, float, float, float, float, float);
};
