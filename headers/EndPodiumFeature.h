#pragma once

class EndPodiumFeature : Feature {

    virtual ~EndPodiumFeature();
    virtual ~EndPodiumFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}
