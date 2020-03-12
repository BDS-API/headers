#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "LogBlock.h"
#include "../util/Random.h"


class NewLogBlock : LogBlock {

public:
    virtual bool isStrippable(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~NewLogBlock();
    NewLogBlock(std::string const&, int);
};
