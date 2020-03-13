#pragma once

#include "Feature.h"


class BlockBlobFeature : Feature {

public:
    ~BlockBlobFeature(); // _ZN16BlockBlobFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16BlockBlobFeature5placeER11BlockSourceRK8BlockPosR6Random
    BlockBlobFeature(Block const&, int); // _ZN16BlockBlobFeatureC2ERK5Blocki
};
