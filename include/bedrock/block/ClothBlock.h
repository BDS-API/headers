#pragma once

#include <string>
#include "BlockLegacy.h"


class ClothBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~ClothBlock();
    ClothBlock(std::string const&, int);
};
