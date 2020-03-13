#pragma once

#include <string>
#include "Goal.h"


class RandomStrollGoal : Goal {

public:
    ~RandomStrollGoal(); // _ZN16RandomStrollGoalD2Ev
    virtual bool canUse(); // _ZN16RandomStrollGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16RandomStrollGoal16canContinueToUseEv
    virtual void start(); // _ZN16RandomStrollGoal5startEv
    virtual void stop(); // _ZN16RandomStrollGoal4stopEv
    virtual void tick(); // _ZN16RandomStrollGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16RandomStrollGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _setWantedPosition(); // _ZN16RandomStrollGoal18_setWantedPositionEv
    RandomStrollGoal(Mob &, float, int, int, int); // _ZN16RandomStrollGoalC2ER3Mobfiii
};
