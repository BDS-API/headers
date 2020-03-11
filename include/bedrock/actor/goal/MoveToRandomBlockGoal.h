#pragma once

#include "../../util/BlockPos.h"
#include "./Goal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class MoveToRandomBlockGoal : Goal {

public:
    virtual ~MoveToRandomBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MoveToRandomBlockGoal(Mob &, float, float, float);
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
};
