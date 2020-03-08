#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class CarrotBlock : CropBlock {

public:
    virtual CarrotBlock::~CarrotBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getRenderLayer()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;

    CarrotBlock(std::string const&, int);
    void _getRenderLayerImpl()const;
};
