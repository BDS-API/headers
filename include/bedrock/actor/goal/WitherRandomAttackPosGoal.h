#pragma once

#include "RandomStrollGoal.h"


class WitherRandomAttackPosGoal : public RandomStrollGoal {

public:
    virtual ~WitherRandomAttackPosGoal(); // _ZN25WitherRandomAttackPosGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN25WitherRandomAttackPosGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN25WitherRandomAttackPosGoal16canContinueToUseEv
    virtual void start(); // _ZN25WitherRandomAttackPosGoal5startEv
    virtual void stop(); // _ZN25WitherRandomAttackPosGoal4stopEv
    WitherRandomAttackPosGoal(Mob &, float, int, int); // _ZN25WitherRandomAttackPosGoalC2ER3Mobfii
};
