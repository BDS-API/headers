#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class BeetrootBlock : CropBlock {

public:
    virtual BeetrootBlock::~BeetrootBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getCropNum(Random &, int, int)const;

    BeetrootBlock(std::string const&, int);
};
