#pragma once

#include <string>
#include "Goal.h"


class GuardianAttackGoal : Goal {

public:
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    ~GuardianAttackGoal();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    GuardianAttackGoal(Guardian &);
};
