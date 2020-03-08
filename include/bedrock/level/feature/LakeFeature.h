#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class LakeFeature : Feature {

public:
    LakeFeature::~LakeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LakeFeature(Block const&);
    LakeFeature(Block const&, Block const&);
    void _check(BlockPos const&, bool *)const;
};
