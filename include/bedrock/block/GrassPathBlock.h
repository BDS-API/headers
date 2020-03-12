#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class GrassPathBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~GrassPathBlock();
    virtual bool canBeOriginalSurface()const;
    virtual bool canContainLiquid()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    GrassPathBlock(std::string const&, int);
};
