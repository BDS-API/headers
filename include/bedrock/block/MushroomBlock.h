#pragma once

class MushroomBlock : BushBlock {

public:
    virtual MushroomBlock::~MushroomBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;

    MushroomBlock(std::string const&, int);
    void _growTree(BlockSource &, BlockPos const&, Random &)const;
    void _getRenderLayerImpl(void)const;
};
