#pragma once

class LegacyTreeFeature : Feature {

    virtual ~LegacyTreeFeature();
    virtual ~LegacyTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
