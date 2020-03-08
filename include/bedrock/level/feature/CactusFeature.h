#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class CactusFeature : Feature {

public:
    virtual CactusFeature::~CactusFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CactusFeature(void);
};
