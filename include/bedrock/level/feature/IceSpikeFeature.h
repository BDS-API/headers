#pragma once

#include "Feature.h"


class IceSpikeFeature : Feature {

public:
    ~IceSpikeFeature(); // _ZN15IceSpikeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15IceSpikeFeature5placeER11BlockSourceRK8BlockPosR6Random
    IceSpikeFeature(); // _ZN15IceSpikeFeatureC2Ev
    void _isValidPlaceBlock(Block const&)const; // _ZNK15IceSpikeFeature18_isValidPlaceBlockERK5Block
};
