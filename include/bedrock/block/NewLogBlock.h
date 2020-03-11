#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./LogBlock.h"
#include "../util/Random.h"
#include <string>


class NewLogBlock : LogBlock {

public:
    virtual ~NewLogBlock();
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    NewLogBlock(std::string const&, int);
};
