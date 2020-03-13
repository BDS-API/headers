#pragma once

#include <string>
#include "Goal.h"


class PlayGoal : Goal {

public:
    ~PlayGoal(); // _ZN8PlayGoalD2Ev
    virtual bool canUse(); // _ZN8PlayGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN8PlayGoal16canContinueToUseEv
    virtual void start(); // _ZN8PlayGoal5startEv
    virtual void stop(); // _ZN8PlayGoal4stopEv
    virtual void tick(); // _ZN8PlayGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK8PlayGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PlayGoal(Villager &, float); // _ZN8PlayGoalC2ER8Villagerf
};
