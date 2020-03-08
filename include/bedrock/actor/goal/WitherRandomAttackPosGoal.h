#pragma once

#include "../Mob"


class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    WitherRandomAttackPosGoal::~WitherRandomAttackPosGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();

    WitherRandomAttackPosGoal(Mob &, float, int, int);
};
