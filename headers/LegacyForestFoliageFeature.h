#pragma once

class LegacyForestFoliageFeature : Feature {

    virtual ~LegacyForestFoliageFeature();
    virtual ~LegacyForestFoliageFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
