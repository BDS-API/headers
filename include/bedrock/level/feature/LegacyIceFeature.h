#pragma once

#include "Feature.h"


class LegacyIceFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacyIceFeature();
    LegacyIceFeature(FeatureRegistry const&);
};
