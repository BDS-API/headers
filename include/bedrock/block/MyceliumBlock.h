#pragma once

#include <string>
#include "BlockLegacy.h"


class MyceliumBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual void getResourceItem(Random &, Block const&, int)const;
    ~MyceliumBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    MyceliumBlock(std::string const&, int);
};
