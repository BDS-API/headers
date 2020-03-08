#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class NewLeafBlock : LeafBlock {

public:
    virtual NewLeafBlock::~NewLeafBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;

    NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>);
};
