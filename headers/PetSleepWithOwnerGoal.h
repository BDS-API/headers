#pragma once

class PetSleepWithOwnerGoal : BaseMoveToBlockGoal {

public:
    static long PetSleepWithOwnerGoal::SETTLE_TICKS;
    static long PetSleepWithOwnerGoal::WAIT_TICKS;

    virtual ~PetSleepWithOwnerGoal();
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

    void PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
