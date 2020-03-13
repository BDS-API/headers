#pragma once

#include <string>
#include "Goal.h"


class SwimWanderGoal : Goal {

public:
    ~SwimWanderGoal(); // _ZN14SwimWanderGoalD2Ev
    virtual bool canUse(); // _ZN14SwimWanderGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14SwimWanderGoal16canContinueToUseEv
    virtual void start(); // _ZN14SwimWanderGoal5startEv
    virtual void tick(); // _ZN14SwimWanderGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14SwimWanderGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwimWanderGoal(Mob &, float, float, int); // _ZN14SwimWanderGoalC2ER3Mobffi
    void _setWantedPosition(); // _ZN14SwimWanderGoal18_setWantedPositionEv
    void wanderComplete(); // _ZN14SwimWanderGoal14wanderCompleteEv
};
