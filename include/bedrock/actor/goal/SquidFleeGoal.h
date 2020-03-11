#pragma once

#include "./Goal.h"
#include "../Squid.h"
#include <string>


class SquidFleeGoal : Goal {

public:
    virtual ~SquidFleeGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidFleeGoal(Squid &);
};
