#pragma once

#include "./RandomStrollGoal.h"
#include "../Mob.h"


class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    virtual ~WitherRandomAttackPosGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();

    WitherRandomAttackPosGoal(Mob &, float, int, int);
};
