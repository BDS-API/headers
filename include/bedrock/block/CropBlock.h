#pragma once

#include <string>
#include "BushBlock.h"


class CropBlock : BushBlock {

public:
    virtual void getCropNum(Random &, int, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~CropBlock();
    virtual void getBaseSeed()const;
    virtual void getVariant(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool isCropBlock()const;
    virtual void getBaseCrop()const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSeedNum(Random &, int, int)const;
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    CropBlock(std::string const&, int);
};
