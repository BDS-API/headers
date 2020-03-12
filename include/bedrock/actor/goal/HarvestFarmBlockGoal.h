#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    virtual void start();
    virtual void tick();
    virtual bool canUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~HarvestFarmBlockGoal();
    virtual void stop();
    HarvestFarmBlockGoal(Mob &, float);
    void findInventorySlotForFarmSeeds();
};
