#pragma once

#include <string>
#include "BlockLegacy.h"


class WebBlock : BlockLegacy {

public:
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~WebBlock();
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void waterSpreadCausesSpawn()const;
    WebBlock(std::string const&, int);
};
