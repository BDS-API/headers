#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class HugeMushroomBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~HugeMushroomBlock();
//  HugeMushroomBlock(std::string const&, int, Material const&, HugeMushroomBlock::Type); //TODO: incomplete function definition
};
