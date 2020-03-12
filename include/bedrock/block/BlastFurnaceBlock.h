#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "FurnaceBlock.h"


class BlastFurnaceBlock : FurnaceBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~BlastFurnaceBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    BlastFurnaceBlock(std::string const&, int, bool);
};
