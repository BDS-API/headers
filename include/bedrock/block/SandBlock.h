#pragma once

#include "unmapped/BlockSource.h"
#include "./HeavyBlock.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class SandBlock : HeavyBlock {

public:
    virtual ~SandBlock();
    virtual bool canBeOriginalSurface()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;

    SandBlock(std::string const&, int);
};
