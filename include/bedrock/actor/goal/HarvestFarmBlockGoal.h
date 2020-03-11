#pragma once

#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~HarvestFarmBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    HarvestFarmBlockGoal(Mob &, float);
    void findInventorySlotForFarmSeeds();
};
