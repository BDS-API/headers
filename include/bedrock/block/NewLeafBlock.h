#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"


class NewLeafBlock : LeafBlock {

public:
    virtual NewLeafBlock::~NewLeafBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;

    NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>);
};
