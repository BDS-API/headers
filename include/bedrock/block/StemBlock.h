#pragma once

#include <string>
#include "BushBlock.h"


class StemBlock : BushBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool isStemBlock()const;
    ~StemBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    StemBlock(std::string const&, int, BlockLegacy const&);
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const;
};
