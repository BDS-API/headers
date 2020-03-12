#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "HeavyBlock.h"


class GravelBlock : HeavyBlock {

public:
    ~GravelBlock();
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual bool canBeOriginalSurface()const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    GravelBlock(std::string const&, int);
};
