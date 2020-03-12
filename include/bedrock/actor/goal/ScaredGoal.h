#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class ScaredGoal : Goal {

public:
    ~ScaredGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ScaredGoal(Mob &, int);
};
