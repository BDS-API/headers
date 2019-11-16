#pragma once

class BlueIceFeature : Feature {

    virtual ~BlueIceFeature();
    virtual ~BlueIceFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
