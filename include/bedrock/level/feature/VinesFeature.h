#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class VinesFeature : Feature {

public:
    virtual ~VinesFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    VinesFeature();
};
