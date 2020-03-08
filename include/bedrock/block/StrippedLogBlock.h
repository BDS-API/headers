#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class StrippedLogBlock : RotatedPillarBlock {

public:
    StrippedLogBlock::~StrippedLogBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StrippedLogBlock(std::string const&, int);
};
