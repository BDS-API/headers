#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    RaidGardenGoal::~RaidGardenGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&);
};
