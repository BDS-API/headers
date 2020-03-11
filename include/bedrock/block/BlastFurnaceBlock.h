#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../util/BlockPos.h"
#include "./FurnaceBlock.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class BlastFurnaceBlock : FurnaceBlock {

public:
    virtual ~BlastFurnaceBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BlastFurnaceBlock(std::string const&, int, bool);
};
