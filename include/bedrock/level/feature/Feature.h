#pragma once

#include "IFeature.h"


class Feature : IFeature {

public:
    ~Feature(); // _ZN7FeatureD2Ev
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK7Feature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    Feature(Actor *); // _ZN7FeatureC2EP5Actor
    void _setManuallyPlaced(Actor *); // _ZN7Feature18_setManuallyPlacedEP5Actor
    void _getManuallyPlaced()const; // _ZNK7Feature18_getManuallyPlacedEv
    void setTransaction(WorldChangeTransaction *); // _ZN7Feature14setTransactionEP22WorldChangeTransaction
    void _placeBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK7Feature11_placeBlockER11BlockSourceRK8BlockPosRK5Block
    void _getBlock(BlockSource &, BlockPos const&)const; // _ZNK7Feature9_getBlockER11BlockSourceRK8BlockPos
    void _isEmptyBlock(BlockSource &, BlockPos const&)const; // _ZNK7Feature13_isEmptyBlockER11BlockSourceRK8BlockPos
    void _getMaterial(BlockSource &, BlockPos const&)const; // _ZNK7Feature12_getMaterialER11BlockSourceRK8BlockPos
};
