#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class HugeMushroomBlock : BlockLegacy {

public:
    virtual HugeMushroomBlock::~HugeMushroomBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    HugeMushroomBlock(std::string const&, int, Material const&, HugeMushroomBlock::Type);
};
