#pragma once

class LegacySpringsFeature : Feature {

    virtual ~LegacySpringsFeature();
    virtual ~LegacySpringsFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
