#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MegaTreeFeature : TreeFeature {

public:
    MegaTreeFeature::~MegaTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaTreeFeature(Actor *, int, int, int, int);
    void _calcTreeHeigth(Random &)const;
    void _checkIsFree(BlockSource &, BlockPos const&, int)const;
    void _makeDirtFloor(BlockSource &, BlockPos const&)const;
    void _prepareTree(BlockSource &, BlockPos const&, int)const;
    void _placeDoubleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _placeSingleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _getBaseHeight()const;
    void _getHeightInterval()const;
    void _getTrunkType()const;
    void _getLeafType()const;
};
