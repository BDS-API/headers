#pragma once

class CentralSpikedFeature : Feature {

    virtual ~CentralSpikedFeature();
    virtual ~CentralSpikedFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
