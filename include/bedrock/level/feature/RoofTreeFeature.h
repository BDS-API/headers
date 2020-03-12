#pragma once

#include "TreeFeature.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class RoofTreeFeature : TreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~RoofTreeFeature();
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, bool, int, int)const;
    void _placeLeafs(BlockSource &, BlockPos const&, BlockPos const&, Random &)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
    RoofTreeFeature(Actor *);
};
