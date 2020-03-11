#pragma once

#include "./Goal.h"
#include "../Player.h"
#include "../Mob.h"
#include <string>


class TradeInterestGoal : Goal {

public:
    virtual ~TradeInterestGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    TradeInterestGoal(Mob &, float, float, float, float, float);
    void _isLookingAtMe(Player const&)const;
    bool isRunning();
};
