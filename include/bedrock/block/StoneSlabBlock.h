#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock : SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    ~StoneSlabBlock();
    virtual bool isValidAuxValue(int)const;
//  StoneSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
