#pragma once

#include "../../../unmapped/BlockSource"


class GlowStoneFeature : Feature {

public:
    virtual GlowStoneFeature::~GlowStoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    GlowStoneFeature(void);
};
