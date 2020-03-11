#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class LayDownGoal : Goal {

public:
    virtual ~LayDownGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    LayDownGoal(Mob &, int, int);
};
