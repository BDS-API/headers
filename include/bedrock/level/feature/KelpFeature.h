#pragma once

#include "Feature.h"


class KelpFeature : Feature {

public:
    ~KelpFeature(); // _ZN11KelpFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11KelpFeature5placeER11BlockSourceRK8BlockPosR6Random
    KelpFeature(); // _ZN11KelpFeatureC2Ev
    void _canPlace(BlockSource &, BlockPos const&)const; // _ZNK11KelpFeature9_canPlaceER11BlockSourceRK8BlockPos
};
