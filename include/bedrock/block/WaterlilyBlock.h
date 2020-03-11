#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./BushBlock.h"
#include <string>


class WaterlilyBlock : BushBlock {

public:
    virtual ~WaterlilyBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;

    WaterlilyBlock(std::string const&, int);
};
