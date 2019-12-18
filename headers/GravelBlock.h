#pragma once

class GravelBlock : HeavyBlock {

public:
    virtual ~GravelBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;

    void GravelBlock(std::string const&, int);
};
