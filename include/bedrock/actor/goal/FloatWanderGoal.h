#pragma once

#include "../../../unmapped/FloatRange.h"
#include <string>
#include "Goal.h"


class FloatWanderGoal : public Goal {

public:
    virtual ~FloatWanderGoal(); // _ZN15FloatWanderGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN15FloatWanderGoal6canUseEv
    virtual void tick(); // _ZN15FloatWanderGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15FloatWanderGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FloatWanderGoal(Mob &, float, float, float, bool, bool, FloatRange); // _ZN15FloatWanderGoalC2ER3Mobfffbb10FloatRange
    void _canReach(Vec3 const&, float); // _ZN15FloatWanderGoal9_canReachERK4Vec3f
};
