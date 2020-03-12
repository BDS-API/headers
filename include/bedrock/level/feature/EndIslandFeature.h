#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class EndIslandFeature : Feature {

public:
    ~EndIslandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    EndIslandFeature();
};
