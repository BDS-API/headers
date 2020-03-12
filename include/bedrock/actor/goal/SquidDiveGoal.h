#pragma once

#include <string>
#include "Goal.h"


class SquidDiveGoal : Goal {

public:
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~SquidDiveGoal();
    virtual void tick();
    virtual void start();
    SquidDiveGoal(Squid &);
};
