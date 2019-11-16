#pragma once

class CactusFeature : Feature {

    virtual ~CactusFeature();
    virtual ~CactusFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
