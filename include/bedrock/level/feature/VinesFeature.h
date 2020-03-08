#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class VinesFeature : Feature {

public:
    VinesFeature::~VinesFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    VinesFeature(void);
};
