#pragma once

#include <string>
#include "SlabBlock.h"


class WoodSlabBlock : SlabBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~WoodSlabBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
//  WoodSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
