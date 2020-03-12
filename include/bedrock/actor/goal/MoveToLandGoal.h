#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~MoveToLandGoal();
    virtual void _moveToBlock();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    MoveToLandGoal(Mob &, float, int, int, int, float);
};
