#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../util/BlockPos.h"
#include "./FlowerBlock.h"
#include "../actor/Actor.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class WitherRoseBlock : FlowerBlock {

public:
    virtual ~WitherRoseBlock();
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WitherRoseBlock(std::string const&, int);
    void _randomParticleOffset(Random &)const;
};
