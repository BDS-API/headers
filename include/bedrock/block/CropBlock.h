#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "BushBlock.h"


class CropBlock : BushBlock {

public:
    virtual bool canContainLiquid()const;
    virtual bool canBeSilkTouched()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual void getCropNum(Random &, int, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getBaseCrop()const;
    ~CropBlock();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSeedNum(Random &, int, int)const;
    virtual bool isCropBlock()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getBaseSeed()const;
    CropBlock(std::string const&, int);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
};
