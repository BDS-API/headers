#pragma once

#include "../../block/unmapped/BlockSource"
#include "../Mob"
#include "../../util/BlockPos"


class MoveToRandomBlockGoal : Goal {

public:
    virtual MoveToRandomBlockGoal::~MoveToRandomBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MoveToRandomBlockGoal(Mob &, float, float, float);
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
};
