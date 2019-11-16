#pragma once

class BambooFeature : Feature {

    virtual ~BambooFeature();
    virtual ~BambooFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
