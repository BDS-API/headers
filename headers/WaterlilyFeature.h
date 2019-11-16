#pragma once

class WaterlilyFeature : Feature {

    virtual ~WaterlilyFeature();
    virtual ~WaterlilyFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
