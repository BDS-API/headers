#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class DropperBlock : DispenserBlock {

public:
    virtual DropperBlock::~DropperBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
