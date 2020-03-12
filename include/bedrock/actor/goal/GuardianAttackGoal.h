#pragma once

#include "../Guardian.h"
#include "Goal.h"
#include <string>


class GuardianAttackGoal : Goal {

public:
    virtual void start();
    virtual void stop();
    ~GuardianAttackGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    GuardianAttackGoal(Guardian &);
};
