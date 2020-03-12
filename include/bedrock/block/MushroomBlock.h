#pragma once

#include <string>
#include "BushBlock.h"


class MushroomBlock : BushBlock {

public:
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getRenderLayer()const;
    ~MushroomBlock();
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual bool canContainLiquid()const;
    MushroomBlock(std::string const&, int);
    void _growTree(BlockSource &, BlockPos const&, Random &)const;
    void _getRenderLayerImpl()const;
};
