#pragma once

#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class DeadBush : BushBlock {

public:
    virtual DeadBush::~DeadBush();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    DeadBush(std::string const&, int);
};
