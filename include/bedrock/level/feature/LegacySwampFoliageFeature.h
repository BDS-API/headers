#pragma once

#include "Feature.h"


class LegacySwampFoliageFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacySwampFoliageFeature();
    LegacySwampFoliageFeature(FeatureRegistry const&);
};
