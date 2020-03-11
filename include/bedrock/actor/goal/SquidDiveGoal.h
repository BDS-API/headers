#pragma once

#include "./Goal.h"
#include "../Squid.h"
#include <string>


class SquidDiveGoal : Goal {

public:
    virtual ~SquidDiveGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidDiveGoal(Squid &);
};
