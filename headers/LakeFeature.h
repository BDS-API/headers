#pragma once

class LakeFeature : Feature {

    virtual ~LakeFeature();
    virtual ~LakeFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
