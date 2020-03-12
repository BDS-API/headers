#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../Mob.h"
#include <memory>
#include <set>


class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    ~RaidGardenGoal();
    virtual void start();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void tick();
//  RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&); //TODO: incomplete function definition
};
