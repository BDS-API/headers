#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class LayEggGoal : BaseMoveToBlockGoal {

public:
    LayEggGoal::~LayEggGoal()
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
