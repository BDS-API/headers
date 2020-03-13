#pragma once

#include <string>
#include "Goal.h"


class TradeInterestGoal : Goal {

public:
    ~TradeInterestGoal(); // _ZN17TradeInterestGoalD2Ev
    virtual bool canUse(); // _ZN17TradeInterestGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17TradeInterestGoal16canContinueToUseEv
    virtual void start(); // _ZN17TradeInterestGoal5startEv
    virtual void stop(); // _ZN17TradeInterestGoal4stopEv
    virtual void tick(); // _ZN17TradeInterestGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17TradeInterestGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TradeInterestGoal(Mob &, float, float, float, float, float); // _ZN17TradeInterestGoalC2ER3Mobfffff
    void _isLookingAtMe(Player const&)const; // _ZNK17TradeInterestGoal14_isLookingAtMeERK6Player
    bool isRunning(); // _ZN17TradeInterestGoal9isRunningEv
};
