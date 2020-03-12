#pragma once

#include <string>
#include "BlockLegacy.h"


class DirtBlock : BlockLegacy {

public:
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual bool canBeOriginalSurface()const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~DirtBlock();
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    DirtBlock(std::string const&, int);
};
