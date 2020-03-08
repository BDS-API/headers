#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"


class BlockBlobFeature : Feature {

public:
    BlockBlobFeature::~BlockBlobFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlockBlobFeature(Block const&, int);
};
