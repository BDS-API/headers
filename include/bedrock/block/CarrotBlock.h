#pragma once

#include "../util/AABB.h"
#include "CropBlock.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class CarrotBlock : CropBlock {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getBaseCrop()const;
    ~CarrotBlock();
    virtual void getBaseSeed()const;
    virtual void getRenderLayer()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getCropNum(Random &, int, int)const;
    virtual void getVariant(Block const&)const;
    void _getRenderLayerImpl()const;
    CarrotBlock(std::string const&, int);
};
