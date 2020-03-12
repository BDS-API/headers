#pragma once

#include "Feature.h"


class BlockBlobFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~BlockBlobFeature();
    BlockBlobFeature(Block const&, int);
};
