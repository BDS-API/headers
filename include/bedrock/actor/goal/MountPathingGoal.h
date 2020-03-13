#pragma once

#include <string>
#include "Goal.h"


class MountPathingGoal : Goal {

public:
    ~MountPathingGoal(); // _ZN16MountPathingGoalD2Ev
    virtual bool canUse(); // _ZN16MountPathingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16MountPathingGoal16canContinueToUseEv
    virtual void start(); // _ZN16MountPathingGoal5startEv
    virtual void stop(); // _ZN16MountPathingGoal4stopEv
    virtual void tick(); // _ZN16MountPathingGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16MountPathingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _getAttackReachSqr(); // _ZN16MountPathingGoal18_getAttackReachSqrEv
    void _init(float, float, bool); // _ZN16MountPathingGoal5_initEffb
    MountPathingGoal(Mob &, float, float, bool); // _ZN16MountPathingGoalC2ER3Mobffb
};
