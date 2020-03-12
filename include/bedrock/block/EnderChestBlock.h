#pragma once

#include <string>
#include "ChestBlock.h"


class EnderChestBlock : ChestBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~EnderChestBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    EnderChestBlock(std::string const&, int);
};
