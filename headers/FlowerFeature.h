#pragma once

class FlowerFeature : Feature {

    virtual ~FlowerFeature();
    virtual ~FlowerFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
