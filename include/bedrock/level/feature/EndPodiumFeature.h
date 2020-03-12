#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class EndPodiumFeature : Feature {

public:
    static long PODIUM_RADIUS;
    static long PODIUM_PILLAR_HEIGHT;
    static long RIM_RADIUS;
    static long CORNER_ROUNDING;
    static long END_PODIUM_LOCATION;
    static long END_PODIUM_CHUNK_POSITION;

    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~EndPodiumFeature();
    EndPodiumFeature(bool);
};
