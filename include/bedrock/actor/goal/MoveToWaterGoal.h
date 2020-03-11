#pragma once

#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    virtual ~MoveToWaterGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
