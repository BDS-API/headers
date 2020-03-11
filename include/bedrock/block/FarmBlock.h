#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class FarmBlock : BlockLegacy {

public:
    virtual ~FarmBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;

    FarmBlock(std::string const&, int);
    bool isNearWater(BlockSource &, BlockPos const&)const;
    bool isUnderCrops(BlockSource &, BlockPos const&)const;
};
