#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    virtual void tick();
    virtual void findTargetBlock();
    ~InspectBookshelfGoal();
    virtual bool canContinueToUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void appendDebugInfo(std::string &)const;
    InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
