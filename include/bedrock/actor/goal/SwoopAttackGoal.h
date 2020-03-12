#pragma once

#include "../../../unmapped/FloatRange.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class SwoopAttackGoal : Goal {

public:
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void start();
    ~SwoopAttackGoal();
    virtual bool canContinueToUse();
    virtual bool canUse();
    SwoopAttackGoal(Mob &, float, FloatRange);
};
