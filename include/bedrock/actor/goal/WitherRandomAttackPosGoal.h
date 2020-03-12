#pragma once

#include "RandomStrollGoal.h"
#include "../Mob.h"


class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    virtual bool canUse();
    ~WitherRandomAttackPosGoal();
    virtual void start();
    virtual void stop();
    virtual bool canContinueToUse();
    WitherRandomAttackPosGoal(Mob &, float, int, int);
};
