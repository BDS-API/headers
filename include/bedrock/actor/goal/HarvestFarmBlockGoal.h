#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    virtual HarvestFarmBlockGoal::~HarvestFarmBlockGoal()
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
