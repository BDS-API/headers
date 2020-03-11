#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BushBlock.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class StemBlock : BushBlock {

public:
    virtual ~StemBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isStemBlock()const;
    virtual bool canContainLiquid()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    StemBlock(std::string const&, int, BlockLegacy const&);
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const;
};
