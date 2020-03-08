#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class GravelBlock : HeavyBlock {

public:
    virtual GravelBlock::~GravelBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;

    GravelBlock(std::string const&, int);
};
