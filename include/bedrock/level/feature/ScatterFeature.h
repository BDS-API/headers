#pragma once

#include "IFeature.h"


class ScatterFeature : IFeature {

public:
    ~ScatterFeature(); // _ZN14ScatterFeatureD2Ev
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK14ScatterFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    ScatterFeature(); // _ZN14ScatterFeatureC2Ev
};
