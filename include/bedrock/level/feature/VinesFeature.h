#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class VinesFeature : Feature {

public:
    virtual VinesFeature::~VinesFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    VinesFeature(void);
};
