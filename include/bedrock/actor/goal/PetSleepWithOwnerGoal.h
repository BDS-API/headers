#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long SETTLE_TICKS;
    static long WAIT_TICKS;

    PetSleepWithOwnerGoal::~PetSleepWithOwnerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _nextStartTick();
    virtual void _moveToBlock();
    virtual void findTargetBlock();

    PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
