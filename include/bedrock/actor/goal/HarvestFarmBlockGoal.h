#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    virtual void stop();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~HarvestFarmBlockGoal();
    virtual void start();
    HarvestFarmBlockGoal(Mob &, float);
    void findInventorySlotForFarmSeeds();
};
