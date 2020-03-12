#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "Goal.h"
#include "../../util/BlockPos.h"


class MoveToRandomBlockGoal : Goal {

public:
    ~MoveToRandomBlockGoal();
    virtual bool canUse();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void tick();
    virtual bool canContinueToUse();
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
    MoveToRandomBlockGoal(Mob &, float, float, float);
};
