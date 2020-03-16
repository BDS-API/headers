#pragma once

#include "Feature.h"


class EndPodiumFeature : public Feature {

public:
    static long PODIUM_RADIUS;
    static long PODIUM_PILLAR_HEIGHT;
    static long RIM_RADIUS;
    static long CORNER_ROUNDING;
    static long END_PODIUM_LOCATION;
    static long END_PODIUM_CHUNK_POSITION;

    virtual ~EndPodiumFeature(); // _ZN16EndPodiumFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK16EndPodiumFeature5placeER11BlockSourceRK8BlockPosR6Random
    EndPodiumFeature(bool); // _ZN16EndPodiumFeatureC2Eb
};
