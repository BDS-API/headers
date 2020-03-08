#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class NewLogBlock : LogBlock {

public:
    NewLogBlock::~NewLogBlock()
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    NewLogBlock(std::string const&, int);
};
