#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class ChargeAttackGoal : Goal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    ~ChargeAttackGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ChargeAttackGoal(Mob &);
};
