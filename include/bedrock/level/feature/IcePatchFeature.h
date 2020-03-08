#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class IcePatchFeature : Feature {

public:
    IcePatchFeature::~IcePatchFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IcePatchFeature(int);
};
