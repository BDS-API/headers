#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "./ChestBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class EnderChestBlock : ChestBlock {

public:
    virtual ~EnderChestBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;

    EnderChestBlock(std::string const&, int);
};
