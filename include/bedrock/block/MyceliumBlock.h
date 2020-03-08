#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class MyceliumBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual MyceliumBlock::~MyceliumBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    MyceliumBlock(std::string const&, int);
};
