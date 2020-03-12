#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include <string>
#include "ScatteredFeaturePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"


class Igloo : ScatteredFeaturePiece {

public:
    static std::string STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    static std::string STRUCTURE_LOCATION_LADDER;
    static std::string STRUCTURE_LOCATION_LABORATORY;

    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    ~Igloo();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    Igloo(int, int);
};
