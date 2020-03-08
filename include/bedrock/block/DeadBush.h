#pragma once

#include "../actor/Player"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class DeadBush : BushBlock {

public:
    DeadBush::~DeadBush()
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    DeadBush(std::string const&, int);
};
