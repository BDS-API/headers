#pragma once

class LegacySpringsFeature : Feature {

public:
    virtual ~LegacySpringsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacySpringsFeature(FeatureRegistry const&);
};
