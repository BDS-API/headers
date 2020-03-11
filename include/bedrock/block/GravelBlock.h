#pragma once

#include "unmapped/BlockSource.h"
#include "./HeavyBlock.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class GravelBlock : HeavyBlock {

public:
    virtual ~GravelBlock();
    virtual bool canBeOriginalSurface()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;

    GravelBlock(std::string const&, int);
};
