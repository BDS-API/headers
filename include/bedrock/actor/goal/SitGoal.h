#pragma once

#include <string>
#include "Goal.h"


class SitGoal : Goal {

public:
    ~SitGoal();
    virtual void start();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    SitGoal(Mob &);
};
