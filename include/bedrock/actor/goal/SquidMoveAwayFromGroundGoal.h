#pragma once

#include <string>
#include "Goal.h"
#include "../Squid.h"


class SquidMoveAwayFromGroundGoal : Goal {

public:
    virtual bool canUse();
    virtual void start();
    virtual bool canContinueToUse();
    ~SquidMoveAwayFromGroundGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void stop();
    SquidMoveAwayFromGroundGoal(Squid &);
};
