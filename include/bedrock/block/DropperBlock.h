#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "DispenserBlock.h"


class DropperBlock : DispenserBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~DropperBlock();
    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
