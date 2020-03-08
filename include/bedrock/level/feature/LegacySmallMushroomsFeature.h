#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/FeatureRegistry"


class LegacySmallMushroomsFeature : Feature {

public:
    virtual LegacySmallMushroomsFeature::~LegacySmallMushroomsFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
