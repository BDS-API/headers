#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RestrictSunGoal : Goal {

public:
    virtual ~RestrictSunGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    RestrictSunGoal(Mob &);
};
