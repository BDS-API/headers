#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class MelonFeature : Feature {

public:
    virtual MelonFeature::~MelonFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MelonFeature(void);
};
