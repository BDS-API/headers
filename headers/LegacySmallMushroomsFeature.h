#pragma once

class LegacySmallMushroomsFeature : Feature {

public:
    virtual ~LegacySmallMushroomsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
