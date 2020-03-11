#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class ClayFeature : Feature {

public:
    virtual ~ClayFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ClayFeature(int);
};
