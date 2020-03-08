#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ClayBlock : BlockLegacy {

public:
    ClayBlock::~ClayBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    ClayBlock(std::string const&, int);
};
