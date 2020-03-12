#pragma once

#include <string>
#include "DispenserBlock.h"


class DropperBlock : DispenserBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~DropperBlock();
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
