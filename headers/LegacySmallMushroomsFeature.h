#pragma once

class LegacySmallMushroomsFeature : Feature {

    virtual ~LegacySmallMushroomsFeature();
    virtual ~LegacySmallMushroomsFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
