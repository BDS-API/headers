#pragma once

#include <string>
#include "HeavyBlock.h"


class GravelBlock : HeavyBlock {

public:
    virtual void getDustColor(Block const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual std::string getDustParticleName(Block const&)const;
    ~GravelBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeOriginalSurface()const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    GravelBlock(std::string const&, int);
};
