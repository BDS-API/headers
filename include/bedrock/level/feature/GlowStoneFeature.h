#pragma once

#include "Feature.h"


class GlowStoneFeature : Feature {

public:
    ~GlowStoneFeature(); // _ZN16GlowStoneFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16GlowStoneFeature5placeER11BlockSourceRK8BlockPosR6Random
    GlowStoneFeature(); // _ZN16GlowStoneFeatureC2Ev
};
