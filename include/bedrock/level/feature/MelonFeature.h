#pragma once

#include "../../../unmapped/BlockSource"


class MelonFeature : Feature {

public:
    virtual MelonFeature::~MelonFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MelonFeature(void);
};
