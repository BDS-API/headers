#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class CropBlock : BushBlock {

public:
    virtual CropBlock::~CropBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isCropBlock()const;
    virtual bool canContainLiquid()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getBaseSeed()const;
    virtual void getBaseCrop()const;
    virtual void getSeedNum(Random &, int, int)const;
    virtual void getCropNum(Random &, int, int)const;

    CropBlock(std::string const&, int);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
};
