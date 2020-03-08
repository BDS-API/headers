#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class StoneSlabBlock3 : SlabBlock {

public:
    static long SLAB_NAMES[abi:cxx11];

    StoneSlabBlock3::~StoneSlabBlock3()
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};
