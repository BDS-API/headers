#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class ChorusPlantBlock : BlockLegacy {

public:
    static long PLANT_WIDTH;
    static long PLANT_HEIGHT;
    static long PLANT_ITEM_DIMENSION;

    virtual ChorusPlantBlock::~ChorusPlantBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;

    ChorusPlantBlock(std::string const&, int);
    bool canGrowChorus(Block const&);
    bool connectsTo(BlockSource &, BlockPos const&, BlockPos const&)const;
};
