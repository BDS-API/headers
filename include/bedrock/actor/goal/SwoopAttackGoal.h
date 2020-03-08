#pragma once

#include "../Mob"
#include "../../../unmapped/FloatRange"


class SwoopAttackGoal : Goal {

public:
    virtual SwoopAttackGoal::~SwoopAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwoopAttackGoal(Mob &, float, FloatRange);
};
