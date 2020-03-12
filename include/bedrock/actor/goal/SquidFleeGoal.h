#pragma once

#include <string>
#include "Goal.h"
#include "../Squid.h"


class SquidFleeGoal : Goal {

public:
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    virtual bool canContinueToUse();
    ~SquidFleeGoal();
    virtual void tick();
    SquidFleeGoal(Squid &);
};
