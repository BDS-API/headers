#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "BaseMoveToGoal.h"
#include "../Mob.h"
#include "../../util/BlockPos.h"


class MoveToVillageGoal : BaseMoveToGoal {

public:
    virtual void _moveToBlock();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _selectRandomPosInVillage();
    ~MoveToVillageGoal();
    virtual void start();
    virtual bool canUse();
    void _tryGetCurrentVillage();
    MoveToVillageGoal(Mob &, float, float, float, int);
};
