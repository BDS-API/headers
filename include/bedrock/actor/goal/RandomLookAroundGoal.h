#pragma once

#include <string>
#include "Goal.h"


class RandomLookAroundGoal : public Goal {

public:
    virtual ~RandomLookAroundGoal(); // _ZN20RandomLookAroundGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN20RandomLookAroundGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN20RandomLookAroundGoal16canContinueToUseEv
    virtual void start(); // _ZN20RandomLookAroundGoal5startEv
    virtual void tick(); // _ZN20RandomLookAroundGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20RandomLookAroundGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RandomLookAroundGoal(Mob &, int, int, float); // _ZN20RandomLookAroundGoalC2ER3Mobiif
};
