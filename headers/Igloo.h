#pragma once

class Igloo : ScatteredFeaturePiece {

public:
    static long Igloo::STRUCTURE_LOCATION_IGLOO_TRAPDOOR[abi:cxx11];
    static long Igloo::STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR[abi:cxx11];
    static long Igloo::STRUCTURE_LOCATION_LADDER[abi:cxx11];
    static long Igloo::STRUCTURE_LOCATION_LABORATORY[abi:cxx11];

    virtual ~Igloo();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void Igloo(int, int);
};
