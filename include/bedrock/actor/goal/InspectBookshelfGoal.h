#pragma once

#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    virtual ~InspectBookshelfGoal();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void findTargetBlock();

    InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
