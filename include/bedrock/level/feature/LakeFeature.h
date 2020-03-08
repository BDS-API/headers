#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class LakeFeature : Feature {

public:
    virtual LakeFeature::~LakeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LakeFeature(Block const&);
    LakeFeature(Block const&, Block const&);
    void _check(BlockPos const&, bool *)const;
};
