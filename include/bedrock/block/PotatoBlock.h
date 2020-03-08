#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class PotatoBlock : CropBlock {

public:
    virtual PotatoBlock::~PotatoBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;

    PotatoBlock(std::string const&, int);
};
