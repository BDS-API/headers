#pragma once

#include <string>
#include "Goal.h"


class SlimeAttackGoal : Goal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~SlimeAttackGoal();
    virtual bool canContinueToUse();
    SlimeAttackGoal(Mob &);
};
