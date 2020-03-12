#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    ~MoveToWaterGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
