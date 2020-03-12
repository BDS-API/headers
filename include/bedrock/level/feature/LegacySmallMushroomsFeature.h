#pragma once

#include "Feature.h"


class LegacySmallMushroomsFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacySmallMushroomsFeature();
    LegacySmallMushroomsFeature(FeatureRegistry const&);
    void _getRandomHeight(int, int, BlockSource &, Random &, BlockPos const&)const;
};
