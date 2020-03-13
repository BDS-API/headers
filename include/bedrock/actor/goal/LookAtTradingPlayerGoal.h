#pragma once

#include <string>
#include "LookAtActorGoal.h"


class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    ~LookAtTradingPlayerGoal(); // _ZN23LookAtTradingPlayerGoalD2Ev
    virtual bool canUse(); // _ZN23LookAtTradingPlayerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN23LookAtTradingPlayerGoal16canContinueToUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23LookAtTradingPlayerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int); // _ZN23LookAtTradingPlayerGoalC2ER3Mobffiiii
};
