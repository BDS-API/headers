#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    InspectBookshelfGoal::~InspectBookshelfGoal()
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void findTargetBlock();

    InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
