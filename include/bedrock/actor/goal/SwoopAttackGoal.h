#pragma once

#include <string>
#include "Goal.h"
#include "../../../unmapped/FloatRange.h"


class SwoopAttackGoal : Goal {

public:
    virtual void stop();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void start();
    ~SwoopAttackGoal();
    SwoopAttackGoal(Mob &, float, FloatRange);
};
