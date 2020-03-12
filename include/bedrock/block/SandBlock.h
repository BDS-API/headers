#pragma once

#include <string>
#include "HeavyBlock.h"


class SandBlock : HeavyBlock {

public:
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getDustColor(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool canBeOriginalSurface()const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getVariant(Block const&)const;
    ~SandBlock();
    SandBlock(std::string const&, int);
};
