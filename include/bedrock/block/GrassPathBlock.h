#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class GrassPathBlock : BlockLegacy {

public:
    GrassPathBlock::~GrassPathBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeOriginalSurface()const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    GrassPathBlock(std::string const&, int);
};
