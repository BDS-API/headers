#pragma once

#include <string>
#include "Goal.h"


class SquidMoveAwayFromGroundGoal : Goal {

public:
    virtual void stop();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    ~SquidMoveAwayFromGroundGoal();
    virtual void tick();
    SquidMoveAwayFromGroundGoal(Squid &);
};
