#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BushBlock.h"


class WaterlilyBlock : BushBlock {

public:
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    ~WaterlilyBlock();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    WaterlilyBlock(std::string const&, int);
};
