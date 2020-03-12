#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class FarmBlock : BlockLegacy {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~FarmBlock();
    virtual void getVariant(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    bool isNearWater(BlockSource &, BlockPos const&)const;
    bool isUnderCrops(BlockSource &, BlockPos const&)const;
    FarmBlock(std::string const&, int);
};
