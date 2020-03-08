#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class ClayFeature : Feature {

public:
    ClayFeature::~ClayFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ClayFeature(int);
};
