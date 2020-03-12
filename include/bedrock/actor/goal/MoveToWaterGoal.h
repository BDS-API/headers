#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class MoveToWaterGoal : BaseMoveToBlockGoal {

public:
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~MoveToWaterGoal();
    virtual bool canUse();
    MoveToWaterGoal(Mob &, float, int, int, int, float);
};
