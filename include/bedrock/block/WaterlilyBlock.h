#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class WaterlilyBlock : BushBlock {

public:
    WaterlilyBlock::~WaterlilyBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;

    WaterlilyBlock(std::string const&, int);
};
