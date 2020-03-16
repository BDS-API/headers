#pragma once

#include "ScatteredFeaturePiece.h"


class Igloo : public ScatteredFeaturePiece {

public:
    static std::string STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_LADDER;
    static std::string STRUCTURE_LOCATION_LABORATORY;

    virtual ~Igloo(); // _ZN5IglooD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK5Igloo7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN5Igloo11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN5Igloo17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    Igloo(int, int); // _ZN5IglooC2Eii
};
