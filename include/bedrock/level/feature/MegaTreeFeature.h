#pragma once

#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class MegaTreeFeature : TreeFeature {

public:
    ~MegaTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _placeSingleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    MegaTreeFeature(Actor *, int, int, int, int);
    void _prepareTree(BlockSource &, BlockPos const&, int)const;
    void _getHeightInterval()const;
    void _checkIsFree(BlockSource &, BlockPos const&, int)const;
    void _getTrunkType()const;
    void _makeDirtFloor(BlockSource &, BlockPos const&)const;
    void _calcTreeHeigth(Random &)const;
    void _placeDoubleTrunkLeaves(BlockSource &, BlockPos const&, int)const;
    void _getBaseHeight()const;
    void _getLeafType()const;
};
