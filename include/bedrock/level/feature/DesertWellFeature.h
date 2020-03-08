#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class DesertWellFeature : Feature {

public:
    virtual DesertWellFeature::~DesertWellFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DesertWellFeature(void);
};
