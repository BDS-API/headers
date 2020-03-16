#pragma once

#include "../../../unmapped/FloatRange.h"
#include <string>
#include "Goal.h"


class SwoopAttackGoal : public Goal {

public:
    virtual ~SwoopAttackGoal(); // _ZN15SwoopAttackGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN15SwoopAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15SwoopAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN15SwoopAttackGoal5startEv
    virtual void stop(); // _ZN15SwoopAttackGoal4stopEv
    virtual void tick(); // _ZN15SwoopAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15SwoopAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SwoopAttackGoal(Mob &, float, FloatRange); // _ZN15SwoopAttackGoalC2ER3Mobf10FloatRange
};
