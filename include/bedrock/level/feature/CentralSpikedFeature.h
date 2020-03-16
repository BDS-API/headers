#pragma once

#include "Feature.h"


class CentralSpikedFeature : public Feature {

public:
    virtual ~CentralSpikedFeature(); // _ZN20CentralSpikedFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK20CentralSpikedFeature5placeER11BlockSourceRK8BlockPosR6Random
    CentralSpikedFeature(Block const&); // _ZN20CentralSpikedFeatureC2ERK5Block
};
