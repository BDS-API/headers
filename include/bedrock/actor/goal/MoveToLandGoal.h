#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    virtual void _moveToBlock();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    ~MoveToLandGoal();
    virtual bool canUse();
    MoveToLandGoal(Mob &, float, int, int, int, float);
};
