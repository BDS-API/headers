#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class InspectBookshelfGoal : BaseMoveToBlockGoal {

public:
    virtual InspectBookshelfGoal::~InspectBookshelfGoal()
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void findTargetBlock();

    InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
