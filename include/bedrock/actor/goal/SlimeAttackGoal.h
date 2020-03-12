#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SlimeAttackGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    ~SlimeAttackGoal();
    virtual void start();
    SlimeAttackGoal(Mob &);
};
