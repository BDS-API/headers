#pragma once

#include "../../util/BlockPos.h"
#include "Goal.h"
#include "../Mob.h"
#include <string>


class MoveIndoorsGoal : Goal {

public:
    virtual bool canUse();
    ~MoveIndoorsGoal();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canContinueToUse();
    MoveIndoorsGoal(Mob &, float, float);
    void _startPathfinding();
    void _isInside(BlockPos const&);
};
