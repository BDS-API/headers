#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long SETTLE_TICKS;
    static long WAIT_TICKS;

    virtual void stop();
    virtual bool canUse();
    virtual void start();
    virtual bool canContinueToUse();
    ~PetSleepWithOwnerGoal();
    virtual void tick();
    virtual void _nextStartTick();
    virtual void _moveToBlock();
    virtual void findTargetBlock();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
