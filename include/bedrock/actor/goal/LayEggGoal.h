#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"
#include "../../definition/DefinitionTrigger.h"


class LayEggGoal : BaseMoveToBlockGoal {

public:
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    ~LayEggGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void tick();
    virtual bool canUse();
    virtual void _moveToBlock();
    virtual bool canContinueToUse();
    void _layEgg(BlockPos const&);
    LayEggGoal(Mob &, float, int, int, int, float, DefinitionTrigger const&);
};
