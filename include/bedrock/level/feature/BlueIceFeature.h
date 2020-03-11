#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class BlueIceFeature : Feature {

public:
    virtual ~BlueIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlueIceFeature();
};
