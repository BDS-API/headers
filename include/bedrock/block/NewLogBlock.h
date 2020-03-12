#pragma once

#include <string>
#include "LogBlock.h"


class NewLogBlock : LogBlock {

public:
    virtual bool isStrippable(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getStrippedBlock(Block const&)const;
    ~NewLogBlock();
    NewLogBlock(std::string const&, int);
};
