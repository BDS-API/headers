#pragma once

#include <string>
#include "BlockLegacy.h"


class HugeMushroomBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    ~HugeMushroomBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
//  HugeMushroomBlock(std::string const&, int, Material const&, HugeMushroomBlock::Type); //TODO: incomplete function definition
};
