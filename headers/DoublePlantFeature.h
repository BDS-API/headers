#pragma once

class DoublePlantFeature : Feature {

    virtual void DoublePlant~DoublePlantFeature();
    virtual void DoublePlant~DoublePlantFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void DoublePlantplace(BlockSource &, BlockPos const&, Random &)const;
}
