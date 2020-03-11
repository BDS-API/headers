#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class HoverGoal : Goal {

public:
    virtual ~HoverGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    HoverGoal(Mob &, float);
};
