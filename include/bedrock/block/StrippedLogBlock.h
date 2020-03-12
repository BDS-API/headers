#pragma once

#include <string>
#include "RotatedPillarBlock.h"


class StrippedLogBlock : RotatedPillarBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    ~StrippedLogBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    StrippedLogBlock(std::string const&, int);
};
