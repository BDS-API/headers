#pragma once

#include <string>
#include "LeafBlock.h"


class NewLeafBlock : LeafBlock {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    ~NewLeafBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;
//  NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
