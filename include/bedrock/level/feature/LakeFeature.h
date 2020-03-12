#pragma once

#include "Feature.h"


class LakeFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LakeFeature();
    LakeFeature(Block const&);
    void _check(BlockPos const&, bool *)const;
    LakeFeature(Block const&, Block const&);
};
