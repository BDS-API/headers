#pragma once

#include <string>
#include "Goal.h"


class MoveIndoorsGoal : Goal {

public:
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void start();
    ~MoveIndoorsGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    void _isInside(BlockPos const&);
    void _startPathfinding();
    MoveIndoorsGoal(Mob &, float, float);
};
