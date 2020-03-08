#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    MegaJungleTreeFeature::~MegaJungleTreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaJungleTreeFeature(Actor *, int, int, int, int);
    void _createCrown(BlockSource &, BlockPos const&, int)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
};
