#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include <set>


class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    ~RaidGardenGoal();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&);
};
