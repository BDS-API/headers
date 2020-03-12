#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "MegaTreeFeature.h"


class MegaJungleTreeFeature : MegaTreeFeature {

public:
    ~MegaJungleTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _placeVine(BlockSource &, BlockPos const&, Random &, int)const;
    void _createCrown(BlockSource &, BlockPos const&, int)const;
    MegaJungleTreeFeature(Actor *, int, int, int, int);
    void _placeVines(BlockSource &, BlockPos const&, Random &, int, int, int)const;
};
