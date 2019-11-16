#pragma once

class LegacyIceFeature : Feature {

    virtual ~LegacyIceFeature();
    virtual ~LegacyIceFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
