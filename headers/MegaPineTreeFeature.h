#pragma once

class MegaPineTreeFeature : MegaTreeFeature {

    virtual ~MegaPineTreeFeature();
    virtual ~MegaPineTreeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
