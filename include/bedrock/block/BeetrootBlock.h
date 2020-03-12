#pragma once

#include <string>
#include "CropBlock.h"


class BeetrootBlock : CropBlock {

public:
    virtual void getBaseCrop()const;
    virtual void getVariant(Block const&)const;
    ~BeetrootBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getCropNum(Random &, int, int)const;
    virtual void getBaseSeed()const;
    BeetrootBlock(std::string const&, int);
};
