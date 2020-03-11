#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class BlockBlobFeature : Feature {

public:
    virtual ~BlockBlobFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlockBlobFeature(Block const&, int);
};
