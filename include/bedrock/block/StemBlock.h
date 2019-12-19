#pragma once

class StemBlock : BushBlock {

public:
    virtual StemBlock::~StemBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isStemBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;

    StemBlock(std::string const&, int, BlockLegacy const&);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const;
};
