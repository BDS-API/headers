#pragma once

#include "RandomStrollGoal.h"


class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    virtual bool canUse();
    virtual void stop();
    virtual void start();
    ~WitherRandomAttackPosGoal();
    virtual bool canContinueToUse();
    WitherRandomAttackPosGoal(Mob &, float, int, int);
};
