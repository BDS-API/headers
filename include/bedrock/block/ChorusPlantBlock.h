#pragma once

#include <string>
#include "BlockLegacy.h"


class ChorusPlantBlock : BlockLegacy {

public:
    static long PLANT_WIDTH;
    static long PLANT_HEIGHT;
    static long PLANT_ITEM_DIMENSION;

    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    ~ChorusPlantBlock();
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isWaterBlocking()const;
    ChorusPlantBlock(std::string const&, int);
    bool connectsTo(BlockSource &, BlockPos const&, BlockPos const&)const;
    bool canGrowChorus(Block const&);
};
