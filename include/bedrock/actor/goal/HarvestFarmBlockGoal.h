#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    ~HarvestFarmBlockGoal(); // _ZN20HarvestFarmBlockGoalD2Ev
    virtual bool canUse(); // _ZN20HarvestFarmBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN20HarvestFarmBlockGoal16canContinueToUseEv
    virtual void start(); // _ZN20HarvestFarmBlockGoal5startEv
    virtual void stop(); // _ZN20HarvestFarmBlockGoal4stopEv
    virtual void tick(); // _ZN20HarvestFarmBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK20HarvestFarmBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN20HarvestFarmBlockGoal13isValidTargetER11BlockSourceRK8BlockPos
    HarvestFarmBlockGoal(Mob &, float); // _ZN20HarvestFarmBlockGoalC2ER3Mobf
    void findInventorySlotForFarmSeeds(); // _ZN20HarvestFarmBlockGoal29findInventorySlotForFarmSeedsEv
};
