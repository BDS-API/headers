#pragma once

#include <string>
#include "Goal.h"


class ChargeAttackGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~ChargeAttackGoal();
    virtual void tick();
    virtual void start();
    ChargeAttackGoal(Mob &);
};
