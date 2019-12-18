#pragma once

class WitherRoseBlock : FlowerBlock {

public:
    virtual ~WitherRoseBlock();
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void WitherRoseBlock(std::string const&, int);
    void _randomParticleOffset(Random &)const;
};
