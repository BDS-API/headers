#pragma once

#include "../../../unmapped/IntRange.h"
#include <string>
#include "Goal.h"


class RandomHoverGoal : public Goal {

public:
    virtual ~RandomHoverGoal(); // _ZN15RandomHoverGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN15RandomHoverGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15RandomHoverGoal16canContinueToUseEv
    virtual void start(); // _ZN15RandomHoverGoal5startEv
    virtual void tick(); // _ZN15RandomHoverGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15RandomHoverGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RandomHoverGoal(Mob &, float, int, float, float, float, IntRange); // _ZN15RandomHoverGoalC2ER3Mobfifff8IntRange
    void _mobMeetsPreconditions()const; // _ZNK15RandomHoverGoal22_mobMeetsPreconditionsEv
    void _computeNewTarget(); // _ZN15RandomHoverGoal17_computeNewTargetEv
    void _moveToTarget(); // _ZN15RandomHoverGoal13_moveToTargetEv
    void _findNewTarget()const; // _ZNK15RandomHoverGoal14_findNewTargetEv
};
