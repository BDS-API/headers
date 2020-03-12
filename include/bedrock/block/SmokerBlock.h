#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "FurnaceBlock.h"


class SmokerBlock : FurnaceBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    ~SmokerBlock();
    SmokerBlock(std::string const&, int, bool);
};
