#pragma once

#include <string>
#include "Goal.h"


class HoverGoal : Goal {

public:
    virtual void tick();
    ~HoverGoal();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    HoverGoal(Mob &, float);
};
