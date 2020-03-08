#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class StoneSlabBlock : SlabBlock {

public:
    static long SLAB_NAMES[abi:cxx11];

    StoneSlabBlock::~StoneSlabBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};
