#pragma once

#include <string>
#include "Goal.h"
#include "../Squid.h"


class SquidDiveGoal : Goal {

public:
    ~SquidDiveGoal();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    SquidDiveGoal(Squid &);
};
