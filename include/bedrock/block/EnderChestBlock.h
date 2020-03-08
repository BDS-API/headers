#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class EnderChestBlock : ChestBlock {

public:
    EnderChestBlock::~EnderChestBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;

    EnderChestBlock(std::string const&, int);
};
