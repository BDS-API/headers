#pragma once

#include "../Mob"
#include "../Player"


class TradeInterestGoal : Goal {

public:
    virtual TradeInterestGoal::~TradeInterestGoal()
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
