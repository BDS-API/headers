#pragma once

class TallGrassFeature : Feature {

    virtual ~TallGrassFeature();
    virtual ~TallGrassFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
