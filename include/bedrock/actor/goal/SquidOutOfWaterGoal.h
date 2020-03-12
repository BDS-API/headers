#pragma once

#include <string>
#include "Goal.h"


class SquidOutOfWaterGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    ~SquidOutOfWaterGoal();
    SquidOutOfWaterGoal(Squid &);
};
