#pragma once

#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class MoveToLandGoal : BaseMoveToBlockGoal {

public:
    virtual ~MoveToLandGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();

    MoveToLandGoal(Mob &, float, int, int, int, float);
};
