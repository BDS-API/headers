#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "BushBlock.h"


class NetherWartBlock : BushBlock {

public:
    static long MAX_AGE;

    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    ~NetherWartBlock();
    virtual bool canBeSilkTouched()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    NetherWartBlock(std::string const&, int);
    void growCropsToMax(BlockSource &, BlockPos const&);
};
