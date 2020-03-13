#pragma once

#include "Feature.h"


class CentralSpikedFeature : Feature {

public:
    ~CentralSpikedFeature(); // _ZN20CentralSpikedFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK20CentralSpikedFeature5placeER11BlockSourceRK8BlockPosR6Random
    CentralSpikedFeature(Block const&); // _ZN20CentralSpikedFeatureC2ERK5Block
};
