#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class IcePatchFeature : Feature {

public:
    virtual ~IcePatchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IcePatchFeature(int);
};
