#pragma once

#include "../Mob"


class ChargeAttackGoal : Goal {

public:
    virtual ChargeAttackGoal::~ChargeAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ChargeAttackGoal(Mob &);
};
