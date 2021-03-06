#pragma once

#include <string>
#include "Goal.h"


class VexRandomMoveGoal : public Goal {

public:
    virtual ~VexRandomMoveGoal(); // _ZN17VexRandomMoveGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN17VexRandomMoveGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN17VexRandomMoveGoal16canContinueToUseEv
    virtual void tick(); // _ZN17VexRandomMoveGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK17VexRandomMoveGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    VexRandomMoveGoal(Mob &); // _ZN17VexRandomMoveGoalC2ER3Mob
};
