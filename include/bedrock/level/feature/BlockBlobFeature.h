#pragma once

class BlockBlobFeature : Feature {

public:
    virtual BlockBlobFeature::~BlockBlobFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BlockBlobFeature(Block const&, int);
};
