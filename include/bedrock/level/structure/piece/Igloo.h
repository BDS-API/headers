#pragma once

#include "../../../../unmapped/BlockSource"


class Igloo : ScatteredFeaturePiece {

public:
    static long STRUCTURE_LOCATION_IGLOO_TRAPDOOR[abi:cxx11];
    static long STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR[abi:cxx11];
    static long STRUCTURE_LOCATION_LADDER[abi:cxx11];
    static long STRUCTURE_LOCATION_LABORATORY[abi:cxx11];

    virtual Igloo::~Igloo();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    Igloo(int, int);
};
