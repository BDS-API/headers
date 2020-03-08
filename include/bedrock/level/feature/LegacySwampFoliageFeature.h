#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"


class LegacySwampFoliageFeature : Feature {

public:
    virtual LegacySwampFoliageFeature::~LegacySwampFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySwampFoliageFeature(FeatureRegistry const&);
};
