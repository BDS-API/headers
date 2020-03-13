#pragma once

#include "TreeFeature.h"


class MegaTreeFeature : TreeFeature {

public:
    ~MegaTreeFeature(); // _ZN15MegaTreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK15MegaTreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    MegaTreeFeature(Actor *, int, int, int, int); // _ZN15MegaTreeFeatureC2EP5Actoriiii
    void _calcTreeHeigth(Random &)const; // _ZNK15MegaTreeFeature15_calcTreeHeigthER6Random
    void _checkIsFree(BlockSource &, BlockPos const&, int)const; // _ZNK15MegaTreeFeature12_checkIsFreeER11BlockSourceRK8BlockPosi
    void _makeDirtFloor(BlockSource &, BlockPos const&)const; // _ZNK15MegaTreeFeature14_makeDirtFloorER11BlockSourceRK8BlockPos
    void _prepareTree(BlockSource &, BlockPos const&, int)const; // _ZNK15MegaTreeFeature12_prepareTreeER11BlockSourceRK8BlockPosi
    void _placeDoubleTrunkLeaves(BlockSource &, BlockPos const&, int)const; // _ZNK15MegaTreeFeature23_placeDoubleTrunkLeavesER11BlockSourceRK8BlockPosi
    void _placeSingleTrunkLeaves(BlockSource &, BlockPos const&, int)const; // _ZNK15MegaTreeFeature23_placeSingleTrunkLeavesER11BlockSourceRK8BlockPosi
    void _getBaseHeight()const; // _ZNK15MegaTreeFeature14_getBaseHeightEv
    void _getHeightInterval()const; // _ZNK15MegaTreeFeature18_getHeightIntervalEv
    void _getTrunkType()const; // _ZNK15MegaTreeFeature13_getTrunkTypeEv
    void _getLeafType()const; // _ZNK15MegaTreeFeature12_getLeafTypeEv
};
