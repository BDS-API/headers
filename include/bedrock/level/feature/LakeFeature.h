#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class LakeFeature : Feature {

public:
    ~LakeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    LakeFeature(Block const&, Block const&);
    LakeFeature(Block const&);
    void _check(BlockPos const&, bool *)const;
};
