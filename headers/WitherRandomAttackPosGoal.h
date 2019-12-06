#pragma once

class WitherRandomAttackPosGoal : RandomStrollGoal {

public:
    virtual ~WitherRandomAttackPosGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);

    void WitherRandomAttackPosGoal(Mob &, float, int, int);
};
