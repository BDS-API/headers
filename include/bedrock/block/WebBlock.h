#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class WebBlock : BlockLegacy {

public:
    WebBlock::~WebBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    WebBlock(std::string const&, int);
};
