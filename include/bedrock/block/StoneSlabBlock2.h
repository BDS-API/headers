#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class StoneSlabBlock2 : SlabBlock {

public:
    static long SLAB_NAMES[abi:cxx11];

    virtual StoneSlabBlock2::~StoneSlabBlock2();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneSlabBlock2(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};
