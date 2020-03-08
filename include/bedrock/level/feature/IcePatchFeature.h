#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class IcePatchFeature : Feature {

public:
    virtual IcePatchFeature::~IcePatchFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IcePatchFeature(int);
};
