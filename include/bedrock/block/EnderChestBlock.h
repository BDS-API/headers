#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "ChestBlock.h"
#include "../util/Random.h"


class EnderChestBlock : ChestBlock {

public:
    virtual bool canBeSilkTouched()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~EnderChestBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    EnderChestBlock(std::string const&, int);
};
