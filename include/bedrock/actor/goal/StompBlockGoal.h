#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "../../level/Level.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual void start();
    virtual void _moveToBlock();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);
    ~StompBlockGoal();
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _canReach(BlockPos const&);
    void _getPosWithBlock(BlockPos)const;
    StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int);
};
