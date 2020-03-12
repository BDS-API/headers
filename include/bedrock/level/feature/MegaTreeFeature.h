#pragma once

#include "TreeFeature.h"


class MegaTreeFeature : TreeFeature {

public:
    ~MegaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _getHeightInterval()const;
    void _placeSingleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    MegaTreeFeature(Actor *, int, int, int, int);
    void _placeDoubleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _getTrunkType()const;
    void _getBaseHeight()const;
    void _getLeafType()const;
    void _prepareTree(BlockSource &, BlockPos const&, int)const;
    void _makeDirtFloor(BlockSource &, BlockPos const&)const;
    void _checkIsFree(BlockSource &, BlockPos const&, int)const;
    void _calcTreeHeigth(Random &)const;
};
