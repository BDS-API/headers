#pragma once

#include <string>
#include "Goal.h"
#include "../Squid.h"


class SquidIdleGoal : Goal {

public:
    virtual void tick();
    virtual void start();
    ~SquidIdleGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void stop();
    SquidIdleGoal(Squid &);
};
