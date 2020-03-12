#pragma once

#include <string>
#include "BlockLegacy.h"


class ClayBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    ~ClayBlock();
    ClayBlock(std::string const&, int);
};
