#pragma once

#include "IFeature.h"


class SingleBlockFeature : IFeature {

public:
    ~SingleBlockFeature(); // _ZN18SingleBlockFeatureD2Ev
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK18SingleBlockFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    SingleBlockFeature(); // _ZN18SingleBlockFeatureC2Ev
    void _placeBlock(IBlockPlacementTarget &, BlockPos const&)const; // _ZNK18SingleBlockFeature11_placeBlockER21IBlockPlacementTargetRK8BlockPos
};
