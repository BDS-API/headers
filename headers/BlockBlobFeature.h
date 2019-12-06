#pragma once

class BlockBlobFeature : Feature {

public:
    virtual ~BlockBlobFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void BlockBlobFeature(Block const&, int);
};
