#pragma once

#include "../Guardian"


class GuardianAttackGoal : Goal {

public:
    virtual GuardianAttackGoal::~GuardianAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    GuardianAttackGoal(Guardian &);
};
