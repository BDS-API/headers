#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class IcePatchFeature : Feature {

public:
    ~IcePatchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    IcePatchFeature(int);
};
