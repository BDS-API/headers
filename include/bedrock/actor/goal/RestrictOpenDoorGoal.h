#pragma once

#include <string>
#include "Goal.h"


class RestrictOpenDoorGoal : Goal {

public:
    ~RestrictOpenDoorGoal(); // _ZN20RestrictOpenDoorGoalD2Ev
    virtual bool canUse(); // _ZN20RestrictOpenDoorGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN20RestrictOpenDoorGoal16canContinueToUseEv
    virtual void start(); // _ZN20RestrictOpenDoorGoal5startEv
    virtual void stop(); // _ZN20RestrictOpenDoorGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20RestrictOpenDoorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RestrictOpenDoorGoal(Mob &); // _ZN20RestrictOpenDoorGoalC2ER3Mob
};
