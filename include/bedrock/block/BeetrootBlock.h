#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class BeetrootBlock : CropBlock {

public:
    virtual BeetrootBlock::~BeetrootBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed(void)const;
    virtual void getBaseCrop(void)const;
    virtual void getCropNum(Random &, int, int)const;

    BeetrootBlock(std::string const&, int);
};
