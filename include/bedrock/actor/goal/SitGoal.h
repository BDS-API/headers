#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SitGoal : Goal {

public:
    virtual ~SitGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    SitGoal(Mob &);
};
