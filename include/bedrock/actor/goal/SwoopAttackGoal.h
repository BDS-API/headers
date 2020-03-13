#pragma once

#include <string>
#include "../../../unmapped/FloatRange.h"
#include "Goal.h"


class SwoopAttackGoal : Goal {

public:
    ~SwoopAttackGoal(); // _ZN15SwoopAttackGoalD2Ev
    virtual bool canUse(); // _ZN15SwoopAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15SwoopAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN15SwoopAttackGoal5startEv
    virtual void stop(); // _ZN15SwoopAttackGoal4stopEv
    virtual void tick(); // _ZN15SwoopAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15SwoopAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwoopAttackGoal(Mob &, float, FloatRange); // _ZN15SwoopAttackGoalC2ER3Mobf10FloatRange
};
