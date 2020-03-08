#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class Igloo : ScatteredFeaturePiece {

public:
    static long STRUCTURE_LOCATION_IGLOO_TRAPDOOR[abi:cxx11];
    static long STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR[abi:cxx11];
    static long STRUCTURE_LOCATION_LADDER[abi:cxx11];
    static long STRUCTURE_LOCATION_LABORATORY[abi:cxx11];

    Igloo::~Igloo()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    Igloo(int, int);
};
