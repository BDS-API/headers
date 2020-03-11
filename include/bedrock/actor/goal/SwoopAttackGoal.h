#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include "../../../unmapped/FloatRange.h"
#include <string>


class SwoopAttackGoal : Goal {

public:
    virtual ~SwoopAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwoopAttackGoal(Mob &, float, FloatRange);
};
