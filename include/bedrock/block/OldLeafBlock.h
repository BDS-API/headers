#pragma once

#include <string>
#include "LeafBlock.h"


class OldLeafBlock : LeafBlock {

public:
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getExtraResourceItem(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~OldLeafBlock();
//  OldLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
