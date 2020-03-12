#pragma once

#include "IFeature.h"


class Feature : IFeature {

public:
    ~Feature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    void _placeBlock(BlockSource &, BlockPos const&, Block const&)const;
    void _getManuallyPlaced()const;
    Feature(Actor *);
    void setTransaction(WorldChangeTransaction *);
    void _getMaterial(BlockSource &, BlockPos const&)const;
    void _isEmptyBlock(BlockSource &, BlockPos const&)const;
    void _getBlock(BlockSource &, BlockPos const&)const;
    void _setManuallyPlaced(Actor *);
};
