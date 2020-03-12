#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"
#include "BushBlock.h"


class StemBlock : BushBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isStemBlock()const;
    ~StemBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const;
    void getGrowthSpeed(BlockSource &, BlockPos const&)const;
    StemBlock(std::string const&, int, BlockLegacy const&);
};
