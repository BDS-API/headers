#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class ScaredGoal : Goal {

public:
    virtual ~ScaredGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ScaredGoal(Mob &, int);
};
