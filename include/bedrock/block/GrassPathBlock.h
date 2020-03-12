#pragma once

#include <string>
#include "BlockLegacy.h"


class GrassPathBlock : BlockLegacy {

public:
    ~GrassPathBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeOriginalSurface()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    GrassPathBlock(std::string const&, int);
};
