#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class BlockPileFeature : Feature {

public:
    virtual void getBlockToPlace(Random &)const;
    ~BlockPileFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void tryPlaceBlock(BlockSource &, BlockPos const&, Random &)const;
    BlockPileFeature(Block const&);
};
