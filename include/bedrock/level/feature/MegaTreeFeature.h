#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./TreeFeature.h"


class MegaTreeFeature : TreeFeature {

public:
    virtual ~MegaTreeFeature();
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
