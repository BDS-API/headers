#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class CactusFeature : Feature {

public:
    CactusFeature::~CactusFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CactusFeature(void);
};
