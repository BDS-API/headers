#pragma once

#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    OceanMonumentPenthouse::~OceanMonumentPenthouse()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentPenthouse(void);
    OceanMonumentPenthouse(int &, BoundingBox &);
};
