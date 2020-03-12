#pragma once

#include <string>
#include "BushBlock.h"


class NetherWartBlock : BushBlock {

public:
    static long MAX_AGE;

    virtual bool canContainLiquid()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
    ~NetherWartBlock();
    NetherWartBlock(std::string const&, int);
    void growCropsToMax(BlockSource &, BlockPos const&);
};
