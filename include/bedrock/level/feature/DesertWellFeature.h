#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class DesertWellFeature : Feature {

public:
    DesertWellFeature::~DesertWellFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DesertWellFeature(void);
};
