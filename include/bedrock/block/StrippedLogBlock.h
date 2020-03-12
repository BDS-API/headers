#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "RotatedPillarBlock.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class StrippedLogBlock : RotatedPillarBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    ~StrippedLogBlock();
    StrippedLogBlock(std::string const&, int);
};
