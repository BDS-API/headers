#pragma once

class LegacySwampFoliageFeature : Feature {

public:
    virtual ~LegacySwampFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacySwampFoliageFeature(FeatureRegistry const&);
};
