#pragma once

#include "../Mob"


class OcelotAttackGoal : Goal {

public:
    virtual OcelotAttackGoal::~OcelotAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OcelotAttackGoal(Mob &, float, float, float);
};
