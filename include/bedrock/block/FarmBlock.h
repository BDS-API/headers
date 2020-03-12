#pragma once

#include <string>
#include "BlockLegacy.h"


class FarmBlock : BlockLegacy {

public:
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~FarmBlock();
    virtual void getVariant(Block const&)const;
    virtual bool canContainLiquid()const;
    bool isNearWater(BlockSource &, BlockPos const&)const;
    FarmBlock(std::string const&, int);
    bool isUnderCrops(BlockSource &, BlockPos const&)const;
};
