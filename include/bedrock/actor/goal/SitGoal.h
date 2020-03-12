#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SitGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~SitGoal();
    virtual void stop();
    virtual void start();
    SitGoal(Mob &);
};
