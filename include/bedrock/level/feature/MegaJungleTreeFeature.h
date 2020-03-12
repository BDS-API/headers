#pragma once

#include "MegaTreeFeature.h"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~MegaJungleTreeFeature();
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const;
    MegaJungleTreeFeature(Actor *, int, int, int, int);
    void _createCrown(BlockSource &, BlockPos const&, int)const;
};
