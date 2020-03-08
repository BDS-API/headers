#pragma once

#include "../Mob"
#include "../../../unmapped/BlockSource"


class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long SETTLE_TICKS;
    static long WAIT_TICKS;

    virtual PetSleepWithOwnerGoal::~PetSleepWithOwnerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _nextStartTick(void);
    virtual void _moveToBlock(void);
    virtual void findTargetBlock(void);

    PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
