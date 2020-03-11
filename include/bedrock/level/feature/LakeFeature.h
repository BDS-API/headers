#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LakeFeature : Feature {

public:
    virtual ~LakeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LakeFeature(Block const&);
    LakeFeature(Block const&, Block const&);
    void _check(BlockPos const&, bool *)const;
};
