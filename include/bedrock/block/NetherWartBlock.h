#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "./BushBlock.h"
#include "../util/BlockPos.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include <string>


class NetherWartBlock : BushBlock {

public:
    static long MAX_AGE;

    virtual ~NetherWartBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;

    NetherWartBlock(std::string const&, int);
    void growCropsToMax(BlockSource &, BlockPos const&);
};
