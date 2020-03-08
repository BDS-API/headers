#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/AABB"


class StemBlock : BushBlock {

public:
    virtual StemBlock::~StemBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isStemBlock()const;
    virtual bool canContainLiquid()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    StemBlock(std::string const&, int, BlockLegacy const&);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const;
};
