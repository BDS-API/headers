#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class MyceliumBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~MyceliumBlock();
    MyceliumBlock(std::string const&, int);
};
