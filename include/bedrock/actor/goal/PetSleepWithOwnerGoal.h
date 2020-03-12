#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long SETTLE_TICKS;
    static long WAIT_TICKS;

    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void _nextStartTick();
    ~PetSleepWithOwnerGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void findTargetBlock();
    virtual void _moveToBlock();
    virtual void stop();
    PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
