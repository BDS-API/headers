#pragma once

#include <string>
#include "Goal.h"


class ShulkerPeekGoal : Goal {

public:
    ~ShulkerPeekGoal(); // _ZN15ShulkerPeekGoalD2Ev
    virtual bool canUse(); // _ZN15ShulkerPeekGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15ShulkerPeekGoal16canContinueToUseEv
    virtual void start(); // _ZN15ShulkerPeekGoal5startEv
    virtual void stop(); // _ZN15ShulkerPeekGoal4stopEv
    virtual void tick(); // _ZN15ShulkerPeekGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15ShulkerPeekGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ShulkerPeekGoal(Mob &); // _ZN15ShulkerPeekGoalC2ER3Mob
};
