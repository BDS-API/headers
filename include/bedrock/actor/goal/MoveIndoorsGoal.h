#pragma once

#include "../Mob"
#include "../../util/BlockPos"


class MoveIndoorsGoal : Goal {

public:
    virtual MoveIndoorsGoal::~MoveIndoorsGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MoveIndoorsGoal(Mob &, float, float);
    void _startPathfinding();
    void _isInside(BlockPos const&);
};
