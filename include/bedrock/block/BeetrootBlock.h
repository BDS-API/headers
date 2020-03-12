#pragma once

#include "../util/AABB.h"
#include "CropBlock.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class BeetrootBlock : CropBlock {

public:
    ~BeetrootBlock();
    virtual void getVariant(Block const&)const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;
    virtual void getBaseSeed()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    BeetrootBlock(std::string const&, int);
};
