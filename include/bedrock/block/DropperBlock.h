#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class DropperBlock : DispenserBlock {

public:
    DropperBlock::~DropperBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
