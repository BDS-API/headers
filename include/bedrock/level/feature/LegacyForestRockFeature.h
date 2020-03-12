#pragma once

#include "Feature.h"


class LegacyForestRockFeature : Feature {

public:
    ~LegacyForestRockFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    LegacyForestRockFeature(FeatureRegistry const&);
};
