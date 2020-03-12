#pragma once

#include <string>
#include "FlowerBlock.h"


class WitherRoseBlock : FlowerBlock {

public:
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    ~WitherRoseBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    WitherRoseBlock(std::string const&, int);
    void _randomParticleOffset(Random &)const;
};
