#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock4 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~StoneSlabBlock4();
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
//  StoneSlabBlock4(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
