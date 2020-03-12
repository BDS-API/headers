#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class DirtBlock : BlockLegacy {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~DirtBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canBeOriginalSurface()const;
    virtual void getVariant(Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual bool isAuxValueRelevantForPicking()const;
    DirtBlock(std::string const&, int);
};
