#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"


class LegacySpringsFeature : Feature {

public:
    virtual LegacySpringsFeature::~LegacySpringsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySpringsFeature(FeatureRegistry const&);
};
