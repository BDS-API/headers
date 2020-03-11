#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class ChargeAttackGoal : Goal {

public:
    virtual ~ChargeAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ChargeAttackGoal(Mob &);
};
