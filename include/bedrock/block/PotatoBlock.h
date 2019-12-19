#pragma once

class PotatoBlock : CropBlock {

public:
    virtual PotatoBlock::~PotatoBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed(void)const;
    virtual void getBaseCrop(void)const;
    virtual void getCropNum(Random &, int, int)const;

    PotatoBlock(std::string const&, int);
};
