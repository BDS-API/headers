#pragma once

#include <string>
#include "Goal.h"


class SquidFleeGoal : Goal {

public:
    virtual void stop();
    virtual bool canContinueToUse();
    ~SquidFleeGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    SquidFleeGoal(Squid &);
};
