#pragma once

#include <string>
#include "Goal.h"


class TradeWithPlayerGoal : Goal {

public:
    ~TradeWithPlayerGoal(); // _ZN19TradeWithPlayerGoalD2Ev
    virtual bool canUse(); // _ZN19TradeWithPlayerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN19TradeWithPlayerGoal16canContinueToUseEv
    virtual void start(); // _ZN19TradeWithPlayerGoal5startEv
    virtual void stop(); // _ZN19TradeWithPlayerGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK19TradeWithPlayerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TradeWithPlayerGoal(Mob &); // _ZN19TradeWithPlayerGoalC2ER3Mob
};
