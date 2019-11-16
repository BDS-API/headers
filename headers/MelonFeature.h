#pragma once

class MelonFeature : Feature {

    virtual ~MelonFeature();
    virtual ~MelonFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
