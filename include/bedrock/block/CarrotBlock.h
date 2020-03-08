#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class CarrotBlock : CropBlock {

public:
    virtual CarrotBlock::~CarrotBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getRenderLayer(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed(void)const;
    virtual void getBaseCrop(void)const;
    virtual void getCropNum(Random &, int, int)const;

    CarrotBlock(std::string const&, int);
    void _getRenderLayerImpl(void)const;
};
