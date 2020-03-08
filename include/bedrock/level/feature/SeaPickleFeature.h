#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class SeaPickleFeature : Feature {

public:
    virtual SeaPickleFeature::~SeaPickleFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaPickleFeature(void);
};
