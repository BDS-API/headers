#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "FlowerBlock.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class WitherRoseBlock : FlowerBlock {

public:
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    ~WitherRoseBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    void _randomParticleOffset(Random &)const;
    WitherRoseBlock(std::string const&, int);
};
