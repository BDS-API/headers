#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ClothBlock : BlockLegacy {

public:
    ClothBlock::~ClothBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ClothBlock(std::string const&, int);
};
