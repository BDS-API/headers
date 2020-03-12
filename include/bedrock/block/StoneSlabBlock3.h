#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock3 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isValidAuxValue(int)const;
    ~StoneSlabBlock3();
    virtual std::string buildDescriptionId(Block const&)const;
//  StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
