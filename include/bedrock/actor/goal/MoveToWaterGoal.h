#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    virtual MoveToWaterGoal::~MoveToWaterGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
