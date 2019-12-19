#pragma once

class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual StompBlockGoal::~StompBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);

    StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int);
    void _getPosWithBlock(BlockPos)const;
};
