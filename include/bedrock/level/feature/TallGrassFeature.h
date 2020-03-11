#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class TallGrassFeature : Feature {

public:
    virtual ~TallGrassFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    TallGrassFeature(Block const&);
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
};
