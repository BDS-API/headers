#pragma once

#include <string>
#include "../../../unmapped/FloatRange.h"
#include "Goal.h"


class CircleAroundAnchorGoal : Goal {

public:
    ~CircleAroundAnchorGoal(); // _ZN22CircleAroundAnchorGoalD2Ev
    virtual bool canUse(); // _ZN22CircleAroundAnchorGoal6canUseEv
    virtual void start(); // _ZN22CircleAroundAnchorGoal5startEv
    virtual void stop(); // _ZN22CircleAroundAnchorGoal4stopEv
    virtual void tick(); // _ZN22CircleAroundAnchorGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22CircleAroundAnchorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    CircleAroundAnchorGoal(Mob &, float, FloatRange, int, FloatRange, FloatRange, int, float); // _ZN22CircleAroundAnchorGoalC2ER3Mobf10FloatRangeiS2_S2_if
    void _calculateHeightOffset()const; // _ZNK22CircleAroundAnchorGoal22_calculateHeightOffsetEv
    void _setAnchorAboveTarget(); // _ZN22CircleAroundAnchorGoal21_setAnchorAboveTargetEv
    void _setAnchorAboveGround(); // _ZN22CircleAroundAnchorGoal21_setAnchorAboveGroundEv
    void _selectNext(); // _ZN22CircleAroundAnchorGoal11_selectNextEv
    void _touchingTarget()const; // _ZNK22CircleAroundAnchorGoal15_touchingTargetEv
};
