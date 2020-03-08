#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class EndPodiumFeature : Feature {

public:
    static long PODIUM_RADIUS;
    static long PODIUM_PILLAR_HEIGHT;
    static long RIM_RADIUS;
    static long CORNER_ROUNDING;
    static long END_PODIUM_LOCATION;
    static long END_PODIUM_CHUNK_POSITION;

    EndPodiumFeature::~EndPodiumFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    EndPodiumFeature(bool);
};
