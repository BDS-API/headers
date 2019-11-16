#pragma once

class BlockBlobFeature : Feature {

    virtual ~BlockBlobFeature();
    virtual ~BlockBlobFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
