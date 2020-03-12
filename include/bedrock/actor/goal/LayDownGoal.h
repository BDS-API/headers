#pragma once

#include <string>
#include "Goal.h"


class LayDownGoal : Goal {

public:
    ~LayDownGoal();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    LayDownGoal(Mob &, int, int);
};
