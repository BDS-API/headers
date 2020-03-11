#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class PodzolAreaFeature : Feature {

public:
    virtual ~PodzolAreaFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PodzolAreaFeature();
};
