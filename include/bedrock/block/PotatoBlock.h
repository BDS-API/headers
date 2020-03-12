#pragma once

#include <string>
#include "CropBlock.h"


class PotatoBlock : CropBlock {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseCrop()const;
    ~PotatoBlock();
    virtual void getBaseSeed()const;
    virtual void getCropNum(Random &, int, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    PotatoBlock(std::string const&, int);
};
