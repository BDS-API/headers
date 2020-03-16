#pragma once

#include <string>
#include "Goal.h"


class ScaredGoal : public Goal {

public:
    virtual ~ScaredGoal(); // _ZN10ScaredGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN10ScaredGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN10ScaredGoal16canContinueToUseEv
    virtual void start(); // _ZN10ScaredGoal5startEv
    virtual void stop(); // _ZN10ScaredGoal4stopEv
    virtual void tick(); // _ZN10ScaredGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10ScaredGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ScaredGoal(Mob &, int); // _ZN10ScaredGoalC2ER3Mobi
};
