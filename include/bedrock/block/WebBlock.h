#pragma once

#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class WebBlock : BlockLegacy {

public:
    virtual WebBlock::~WebBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    WebBlock(std::string const&, int);
};
