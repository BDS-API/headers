#pragma once

#include "../util/AABB.h"
#include "CropBlock.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class PotatoBlock : CropBlock {

public:
    ~PotatoBlock();
    virtual void getBaseCrop()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getBaseSeed()const;
    virtual void getVariant(Block const&)const;
    virtual void getCropNum(Random &, int, int)const;
    PotatoBlock(std::string const&, int);
};
