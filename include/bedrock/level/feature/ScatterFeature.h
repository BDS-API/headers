#pragma once

#include "IFeature.h"


class ScatterFeature : public IFeature {

public:
    virtual ~ScatterFeature(); // _ZN14ScatterFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK14ScatterFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    ScatterFeature(); // _ZN14ScatterFeatureC2Ev
};
