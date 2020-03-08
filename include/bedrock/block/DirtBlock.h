#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class DirtBlock : BlockLegacy {

public:
    virtual DirtBlock::~DirtBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    DirtBlock(std::string const&, int);
};
