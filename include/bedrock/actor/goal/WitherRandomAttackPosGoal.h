#pragma once

#include "../Mob"


class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    virtual WitherRandomAttackPosGoal::~WitherRandomAttackPosGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);

    WitherRandomAttackPosGoal(Mob &, float, int, int);
};
