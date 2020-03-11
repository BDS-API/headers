#pragma once

#include "../../util/Random.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./MegaTreeFeature.h"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    virtual ~MegaJungleTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MegaJungleTreeFeature(Actor *, int, int, int, int);
    void _createCrown(BlockSource &, BlockPos const&, int)const;
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
};
