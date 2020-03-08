#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    MoveToLandGoal::~MoveToLandGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();

    MoveToLandGoal(Mob &, float, int, int, int, float);
};
