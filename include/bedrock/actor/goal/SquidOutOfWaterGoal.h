#pragma once

#include "./Goal.h"
#include "../Squid.h"
#include <string>


class SquidOutOfWaterGoal : Goal {

public:
    virtual ~SquidOutOfWaterGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SquidOutOfWaterGoal(Squid &);
};
