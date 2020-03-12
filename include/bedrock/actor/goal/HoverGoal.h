#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class HoverGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void stop();
    virtual void tick();
    ~HoverGoal();
    HoverGoal(Mob &, float);
};
