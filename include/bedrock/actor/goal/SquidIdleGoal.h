#pragma once

#include <string>
#include "Goal.h"


class SquidIdleGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    ~SquidIdleGoal();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    SquidIdleGoal(Squid &);
};
