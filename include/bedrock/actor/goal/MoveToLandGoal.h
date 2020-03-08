#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    virtual MoveToLandGoal::~MoveToLandGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();

    MoveToLandGoal(Mob &, float, int, int, int, float);
};
