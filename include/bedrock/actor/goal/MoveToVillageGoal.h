#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "./BaseMoveToGoal.h"
#include <string>


class MoveToVillageGoal : BaseMoveToGoal {

public:
    virtual ~MoveToVillageGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();
    virtual void _selectRandomPosInVillage();

    MoveToVillageGoal(Mob &, float, float, float, int);
    void _tryGetCurrentVillage();
};
