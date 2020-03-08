#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class BeetrootBlock : CropBlock {

public:
    BeetrootBlock::~BeetrootBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;

    BeetrootBlock(std::string const&, int);
};
