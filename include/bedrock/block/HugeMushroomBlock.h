#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class HugeMushroomBlock : BlockLegacy {

public:
    HugeMushroomBlock::~HugeMushroomBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    HugeMushroomBlock(std::string const&, int, Material const&, HugeMushroomBlock::Type);
};
