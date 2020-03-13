#pragma once

#include <string>
#include "Goal.h"


class BreatheAirGoal : Goal {

public:
    ~BreatheAirGoal(); // _ZN14BreatheAirGoalD2Ev
    virtual bool canUse(); // _ZN14BreatheAirGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14BreatheAirGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN14BreatheAirGoal16canBeInterruptedEv
    virtual void start(); // _ZN14BreatheAirGoal5startEv
    virtual void tick(); // _ZN14BreatheAirGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14BreatheAirGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BreatheAirGoal(Mob &); // _ZN14BreatheAirGoalC2ER3Mob
    void _determineApproximateDepth(); // _ZN14BreatheAirGoal26_determineApproximateDepthEv
    void _findAirPosition(); // _ZN14BreatheAirGoal16_findAirPositionEv
};
