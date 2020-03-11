#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SlimeAttackGoal : Goal {

public:
    virtual ~SlimeAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeAttackGoal(Mob &);
};
