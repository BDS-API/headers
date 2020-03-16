#pragma once

#include <string>
#include "Goal.h"


class SlimeKeepOnJumpingGoal : public Goal {

public:
    virtual ~SlimeKeepOnJumpingGoal(); // _ZN22SlimeKeepOnJumpingGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN22SlimeKeepOnJumpingGoal6canUseEv
    virtual void tick(); // _ZN22SlimeKeepOnJumpingGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22SlimeKeepOnJumpingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SlimeKeepOnJumpingGoal(Mob &); // _ZN22SlimeKeepOnJumpingGoalC2ER3Mob
};
