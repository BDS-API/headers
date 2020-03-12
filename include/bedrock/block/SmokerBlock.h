#pragma once

#include <string>
#include "FurnaceBlock.h"


class SmokerBlock : FurnaceBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~SmokerBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    SmokerBlock(std::string const&, int, bool);
};
