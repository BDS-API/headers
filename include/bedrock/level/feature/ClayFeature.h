#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class ClayFeature : Feature {

public:
    virtual ClayFeature::~ClayFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    ClayFeature(int);
};
