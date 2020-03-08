#pragma once

#include "../../../unmapped/FloatRange"
#include "../Mob"


class SwoopAttackGoal : Goal {

public:
    SwoopAttackGoal::~SwoopAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwoopAttackGoal(Mob &, float, FloatRange);
};
