#pragma once

#include "unmapped/BlockSource.h"
#include "./DispenserBlock.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class DropperBlock : DispenserBlock {

public:
    virtual ~DropperBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
