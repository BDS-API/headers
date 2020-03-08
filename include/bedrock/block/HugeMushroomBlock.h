#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class HugeMushroomBlock : BlockLegacy {

public:
    virtual HugeMushroomBlock::~HugeMushroomBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    HugeMushroomBlock(std::string const&, int, Material const&, HugeMushroomBlock::Type);
};
