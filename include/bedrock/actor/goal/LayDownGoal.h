#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class LayDownGoal : Goal {

public:
    virtual bool canUse();
    virtual void tick();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~LayDownGoal();
    virtual bool canContinueToUse();
    virtual void stop();
    LayDownGoal(Mob &, int, int);
};
