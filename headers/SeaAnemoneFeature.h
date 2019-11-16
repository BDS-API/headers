#pragma once

class SeaAnemoneFeature : Feature {

    virtual ~SeaAnemoneFeature();
    virtual ~SeaAnemoneFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
