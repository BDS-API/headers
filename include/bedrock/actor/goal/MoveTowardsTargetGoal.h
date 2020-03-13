#pragma once

#include <string>
#include "Goal.h"


class MoveTowardsTargetGoal : Goal {

public:
    ~MoveTowardsTargetGoal(); // _ZN21MoveTowardsTargetGoalD2Ev
    virtual bool canUse(); // _ZN21MoveTowardsTargetGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN21MoveTowardsTargetGoal16canContinueToUseEv
    virtual void start(); // _ZN21MoveTowardsTargetGoal5startEv
    virtual void stop(); // _ZN21MoveTowardsTargetGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21MoveTowardsTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MoveTowardsTargetGoal(Mob &, float, float); // _ZN21MoveTowardsTargetGoalC2ER3Mobff
};
