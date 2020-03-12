#pragma once

#include "BaseMoveToGoal.h"
#include <string>


class MoveToVillageGoal : BaseMoveToGoal {

public:
    virtual void tick();
    virtual void _moveToBlock();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    ~MoveToVillageGoal();
    virtual void _selectRandomPosInVillage();
    virtual bool canContinueToUse();
    virtual void start();
    virtual bool canUse();
    void _tryGetCurrentVillage();
    MoveToVillageGoal(Mob &, float, float, float, int);
};
