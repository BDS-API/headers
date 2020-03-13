#pragma once

#include <string>
#include "Goal.h"


class SlimeRandomDirectionGoal : Goal {

public:
    ~SlimeRandomDirectionGoal(); // _ZN24SlimeRandomDirectionGoalD2Ev
    virtual bool canUse(); // _ZN24SlimeRandomDirectionGoal6canUseEv
    virtual void tick(); // _ZN24SlimeRandomDirectionGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK24SlimeRandomDirectionGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SlimeRandomDirectionGoal(Mob &); // _ZN24SlimeRandomDirectionGoalC2ER3Mob
};
