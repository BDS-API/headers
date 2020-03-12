#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class PodzolAreaFeature : Feature {

public:
    ~PodzolAreaFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    PodzolAreaFeature();
};
