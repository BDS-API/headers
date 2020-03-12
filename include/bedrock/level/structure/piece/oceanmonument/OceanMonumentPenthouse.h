#pragma once

#include "../../../../util/Random.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentPenthouse();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    OceanMonumentPenthouse(int &, BoundingBox &);
    OceanMonumentPenthouse();
};
