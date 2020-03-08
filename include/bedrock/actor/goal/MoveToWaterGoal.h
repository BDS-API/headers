#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    MoveToWaterGoal::~MoveToWaterGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
