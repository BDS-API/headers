#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/Random.h"
#include "./ScatteredFeaturePiece.h"


class Igloo : ScatteredFeaturePiece {

public:
    static std::string STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_LADDER;
    static std::string STRUCTURE_LOCATION_LABORATORY;

    virtual ~Igloo();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    Igloo(int, int);
};
