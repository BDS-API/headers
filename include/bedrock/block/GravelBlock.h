#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class GravelBlock : HeavyBlock {

public:
    virtual GravelBlock::~GravelBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName(Block const&)const;

    GravelBlock(std::string const&, int);
};
