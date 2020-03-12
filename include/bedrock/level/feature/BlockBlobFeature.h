#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class BlockBlobFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~BlockBlobFeature();
    BlockBlobFeature(Block const&, int);
};
