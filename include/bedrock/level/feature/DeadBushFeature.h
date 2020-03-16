#pragma once

#include "Feature.h"


class DeadBushFeature : public Feature {

public:
    virtual ~DeadBushFeature(); // _ZN15DeadBushFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15DeadBushFeature5placeER11BlockSourceRK8BlockPosR6Random
    DeadBushFeature(); // _ZN15DeadBushFeatureC2Ev
    void _isFree(Material const&)const; // _ZNK15DeadBushFeature7_isFreeERK8Material
};
