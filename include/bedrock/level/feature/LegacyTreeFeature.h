#pragma once

#include "Feature.h"


class LegacyTreeFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacyTreeFeature();
//  LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
};
