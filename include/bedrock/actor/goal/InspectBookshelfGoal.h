#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    ~InspectBookshelfGoal();
    virtual void findTargetBlock();
    virtual void _canReach(BlockPos const&);
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
