#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void tick();
    virtual void stop();
    ~StompBlockGoal();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);
    virtual void _moveToBlock();
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _canReach(BlockPos const&);
    virtual bool canContinueToUse();
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual bool canUse();
    void _getPosWithBlock(BlockPos)const;
    StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int);
};
