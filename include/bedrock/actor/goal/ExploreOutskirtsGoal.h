#pragma once

#include <string>
#include "Goal.h"


class ExploreOutskirtsGoal : Goal {

public:
    ~ExploreOutskirtsGoal(); // _ZN20ExploreOutskirtsGoalD2Ev
    virtual bool canUse(); // _ZN20ExploreOutskirtsGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN20ExploreOutskirtsGoal16canContinueToUseEv
    virtual void start(); // _ZN20ExploreOutskirtsGoal5startEv
    virtual void stop(); // _ZN20ExploreOutskirtsGoal4stopEv
    virtual void tick(); // _ZN20ExploreOutskirtsGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20ExploreOutskirtsGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ExploreOutskirtsGoal(Mob &, float, float, int); // _ZN20ExploreOutskirtsGoalC2ER3Mobffi
};
