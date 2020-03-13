#pragma once

#include <string>
#include "Goal.h"


class PanicGoal : Goal {

public:
    ~PanicGoal(); // _ZN9PanicGoalD2Ev
    virtual bool canUse(); // _ZN9PanicGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN9PanicGoal16canContinueToUseEv
    virtual void start(); // _ZN9PanicGoal5startEv
    virtual void stop(); // _ZN9PanicGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9PanicGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    PanicGoal(Mob &, float, bool, bool, bool); // _ZN9PanicGoalC2ER3Mobfbbb
    void _findWaterPos(Vec3 &, int, int); // _ZN9PanicGoal13_findWaterPosER4Vec3ii
};
