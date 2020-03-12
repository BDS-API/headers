#pragma once

#include <string>
#include "Goal.h"


class OcelotAttackGoal : Goal {

public:
    ~OcelotAttackGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void stop();
    OcelotAttackGoal(Mob &, float, float, float);
};
