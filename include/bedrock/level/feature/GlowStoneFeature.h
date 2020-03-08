#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class GlowStoneFeature : Feature {

public:
    GlowStoneFeature::~GlowStoneFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GlowStoneFeature(void);
};
