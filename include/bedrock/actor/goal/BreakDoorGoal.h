#pragma once

#include <string>
#include "DoorInteractGoal.h"


class BreakDoorGoal : DoorInteractGoal {

public:
    ~BreakDoorGoal(); // _ZN13BreakDoorGoalD2Ev
    virtual bool canUse(); // _ZN13BreakDoorGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13BreakDoorGoal16canContinueToUseEv
    virtual void start(); // _ZN13BreakDoorGoal5startEv
    virtual void stop(); // _ZN13BreakDoorGoal4stopEv
    virtual void tick(); // _ZN13BreakDoorGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13BreakDoorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BreakDoorGoal(Mob &); // _ZN13BreakDoorGoalC2ER3Mob
    void getBreakRate()const; // _ZNK13BreakDoorGoal12getBreakRateEv
};
