#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class OcelotAttackGoal : Goal {

public:
    virtual ~OcelotAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OcelotAttackGoal(Mob &, float, float, float);
};
