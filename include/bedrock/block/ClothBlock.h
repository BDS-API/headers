#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ClothBlock : BlockLegacy {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~ClothBlock();
    ClothBlock(std::string const&, int);
};
