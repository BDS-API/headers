#pragma once

#include "../../../unmapped/Block.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~StompBlockGoal();
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
