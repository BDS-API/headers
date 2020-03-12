#pragma once

#include "ScatteredFeaturePiece.h"


class Igloo : ScatteredFeaturePiece {

public:
    static std::string STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_LADDER;
    static std::string STRUCTURE_LOCATION_LABORATORY;

    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~Igloo();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    Igloo(int, int);
};
