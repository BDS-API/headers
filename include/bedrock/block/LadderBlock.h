#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class LadderBlock : BlockLegacy {

public:
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~LadderBlock();
    virtual bool isWaterBlocking()const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canBeSilkTouched()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    LadderBlock(std::string const&, int);
};
