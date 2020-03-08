#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class WoodSlabBlock : SlabBlock {

public:
    virtual WoodSlabBlock::~WoodSlabBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WoodSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};
