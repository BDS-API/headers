#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class SeaPickleFeature : Feature {

public:
    SeaPickleFeature::~SeaPickleFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaPickleFeature(void);
};
