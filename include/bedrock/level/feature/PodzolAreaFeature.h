#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class PodzolAreaFeature : Feature {

public:
    virtual PodzolAreaFeature::~PodzolAreaFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PodzolAreaFeature(void);
};
