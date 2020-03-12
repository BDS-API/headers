#pragma once

#include <string>
#include "CropBlock.h"


class CarrotBlock : CropBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getCropNum(Random &, int, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~CarrotBlock();
    virtual void getRenderLayer()const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseCrop()const;
    virtual void getBaseSeed()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    CarrotBlock(std::string const&, int);
    void _getRenderLayerImpl()const;
};
