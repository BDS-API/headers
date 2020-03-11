#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class LayEggGoal : BaseMoveToBlockGoal {

public:
    virtual ~LayEggGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();

    LayEggGoal(Mob &, float, int, int, int, float, DefinitionTrigger const&);
    void _layEgg(BlockPos const&);
};
