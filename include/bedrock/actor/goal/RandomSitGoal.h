#pragma once

#include <string>
#include "Goal.h"


class RandomSitGoal : Goal {

public:
    ~RandomSitGoal(); // _ZN13RandomSitGoalD2Ev
    virtual bool canUse(); // _ZN13RandomSitGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13RandomSitGoal16canContinueToUseEv
    virtual void start(); // _ZN13RandomSitGoal5startEv
    virtual void stop(); // _ZN13RandomSitGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13RandomSitGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RandomSitGoal(Mob &, float, float, float, float); // _ZN13RandomSitGoalC2ER3Mobffff
};
