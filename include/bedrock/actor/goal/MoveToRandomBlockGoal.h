#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MoveToRandomBlockGoal : Goal {

public:
    MoveToRandomBlockGoal::~MoveToRandomBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MoveToRandomBlockGoal(Mob &, float, float, float);
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
};
