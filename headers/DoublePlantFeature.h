#pragma once

class DoublePlantFeature : Feature {

    virtual ~DoublePlantFeature();
    virtual ~DoublePlantFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
