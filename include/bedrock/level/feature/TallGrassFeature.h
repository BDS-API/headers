#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class TallGrassFeature : Feature {

public:
    ~TallGrassFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
    TallGrassFeature(Block const&);
};
