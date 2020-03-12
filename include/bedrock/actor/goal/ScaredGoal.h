#pragma once

#include <string>
#include "Goal.h"


class ScaredGoal : Goal {

public:
    virtual void stop();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    ~ScaredGoal();
    ScaredGoal(Mob &, int);
};
