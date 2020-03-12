#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class OcelotAttackGoal : Goal {

public:
    ~OcelotAttackGoal();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void tick();
    OcelotAttackGoal(Mob &, float, float, float);
};
