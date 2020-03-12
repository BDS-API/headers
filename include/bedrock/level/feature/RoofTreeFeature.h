#pragma once

#include "TreeFeature.h"


class RoofTreeFeature : TreeFeature {

public:
    ~RoofTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _placeLeafs(BlockSource &, BlockPos const&, BlockPos const&, Random &)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, bool, int, int)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeLeafAt(BlockSource &, BlockPos const&)const;
    RoofTreeFeature(Actor *);
};
