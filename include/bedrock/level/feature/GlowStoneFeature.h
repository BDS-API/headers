#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class GlowStoneFeature : Feature {

public:
    virtual GlowStoneFeature::~GlowStoneFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GlowStoneFeature(void);
};
