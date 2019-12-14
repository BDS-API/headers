#pragma once

class BeetrootBlock : CropBlock {

public:
    virtual ~BeetrootBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed(void)const;
    virtual void getBaseCrop(void)const;
    virtual void getCropNum(Random &, int, int)const;

    void BeetrootBlock(std::string const&, int);
};
