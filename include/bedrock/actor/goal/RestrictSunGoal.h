#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RestrictSunGoal : Goal {

public:
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    ~RestrictSunGoal();
    virtual void appendDebugInfo(std::string &)const;
    RestrictSunGoal(Mob &);
};
