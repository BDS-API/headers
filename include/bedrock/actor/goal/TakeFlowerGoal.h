#pragma once

#include <string>
#include "Goal.h"


class TakeFlowerGoal : Goal {

public:
    ~TakeFlowerGoal(); // _ZN14TakeFlowerGoalD2Ev
    virtual bool canUse(); // _ZN14TakeFlowerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14TakeFlowerGoal16canContinueToUseEv
    virtual void start(); // _ZN14TakeFlowerGoal5startEv
    virtual void stop(); // _ZN14TakeFlowerGoal4stopEv
    virtual void tick(); // _ZN14TakeFlowerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14TakeFlowerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TakeFlowerGoal(Mob &); // _ZN14TakeFlowerGoalC2ER3Mob
};
