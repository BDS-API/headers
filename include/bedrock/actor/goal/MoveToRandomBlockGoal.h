#pragma once

class MoveToRandomBlockGoal : Goal {

public:
    virtual MoveToRandomBlockGoal::~MoveToRandomBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveToRandomBlockGoal(Mob &, float, float, float);
    void _isValidDestinationBlock(BlockSource &, BlockPos const&);
};
