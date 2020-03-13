#pragma once

#include "Feature.h"


class LakeFeature : Feature {

public:
    ~LakeFeature(); // _ZN11LakeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11LakeFeature5placeER11BlockSourceRK8BlockPosR6Random
    LakeFeature(Block const&); // _ZN11LakeFeatureC2ERK5Block
    LakeFeature(Block const&, Block const&); // _ZN11LakeFeatureC2ERK5BlockS2_
    void _check(BlockPos const&, bool *)const; // _ZNK11LakeFeature6_checkERK8BlockPosPb
};
