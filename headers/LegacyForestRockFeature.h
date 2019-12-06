#pragma once

class LegacyForestRockFeature : Feature {

public:
    virtual ~LegacyForestRockFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyForestRockFeature(FeatureRegistry const&);
};
