#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    virtual MegaJungleTreeFeature::~MegaJungleTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaJungleTreeFeature(Actor *, int, int, int, int);
    void _createCrown(BlockSource &, BlockPos const&, int)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
};
