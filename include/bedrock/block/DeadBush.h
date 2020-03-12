#pragma once

#include <string>
#include "BushBlock.h"


class DeadBush : BushBlock {

public:
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~DeadBush();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    DeadBush(std::string const&, int);
};
