#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./RotatedPillarBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class StrippedLogBlock : RotatedPillarBlock {

public:
    virtual ~StrippedLogBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StrippedLogBlock(std::string const&, int);
};
