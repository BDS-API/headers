#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ClayBlock : BlockLegacy {

public:
    virtual bool canBeOriginalSurface()const;
    ~ClayBlock();
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    ClayBlock(std::string const&, int);
};
