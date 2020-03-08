#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class PodzolAreaFeature : Feature {

public:
    PodzolAreaFeature::~PodzolAreaFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PodzolAreaFeature(void);
};
