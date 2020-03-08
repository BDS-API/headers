#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"


class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual OceanMonumentPenthouse::~OceanMonumentPenthouse()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentPenthouse(void);
    OceanMonumentPenthouse(int &, BoundingBox &);
};
