#pragma once

class LegacyIceFeature : Feature {

public:
    virtual ~LegacyIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyIceFeature(FeatureRegistry const&);
};
