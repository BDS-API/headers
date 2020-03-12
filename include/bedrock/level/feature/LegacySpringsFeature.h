#pragma once

#include "Feature.h"


class LegacySpringsFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacySpringsFeature();
    LegacySpringsFeature(FeatureRegistry const&);
};
