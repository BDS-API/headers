#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class MelonFeature : Feature {

public:
    MelonFeature::~MelonFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MelonFeature(void);
};
