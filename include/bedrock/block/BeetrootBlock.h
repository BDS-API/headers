#pragma once

#include "./CropBlock.h"
#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include <string>


class BeetrootBlock : CropBlock {

public:
    virtual ~BeetrootBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;

    BeetrootBlock(std::string const&, int);
};
