#pragma once

#include "../../block/unmapped/BlockSource"
#include "../Mob"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"


class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual StompBlockGoal::~StompBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void _moveToBlock();
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);

    StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int);
    void _getPosWithBlock(BlockPos)const;
};
