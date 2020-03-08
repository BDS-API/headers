#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"


class BlockBlobFeature : Feature {

public:
    virtual BlockBlobFeature::~BlockBlobFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlockBlobFeature(Block const&, int);
};
