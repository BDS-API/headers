#pragma once

#include <string>
#include "Goal.h"
#include "../Squid.h"


class SquidOutOfWaterGoal : Goal {

public:
    ~SquidOutOfWaterGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void start();
    SquidOutOfWaterGoal(Squid &);
};
