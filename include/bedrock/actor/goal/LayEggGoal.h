#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class LayEggGoal : BaseMoveToBlockGoal {

public:
    virtual void _moveToBlock();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~LayEggGoal();
    virtual void tick();
    virtual bool canUse();
    virtual void start();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    LayEggGoal(Mob &, float, int, int, int, float, DefinitionTrigger const&);
    void _layEgg(BlockPos const&);
};
