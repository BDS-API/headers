#pragma once

#include <string>
#include "Goal.h"


class MoveToRandomBlockGoal : Goal {

public:
    virtual void start();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~MoveToRandomBlockGoal();
    virtual void stop();
    virtual void tick();
    MoveToRandomBlockGoal(Mob &, float, float, float);
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
};
