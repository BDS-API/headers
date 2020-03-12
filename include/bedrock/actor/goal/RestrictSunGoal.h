#pragma once

#include <string>
#include "Goal.h"


class RestrictSunGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    ~RestrictSunGoal();
    RestrictSunGoal(Mob &);
};
